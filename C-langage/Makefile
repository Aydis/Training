aydis: c-asm.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s c-asm.c -S

float: float.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s float.c -S

double: double.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s double.c -S

const: const.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s const.c -S


demo-if: demo-if-else.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s demo-if-else.c -S

main-elf: demo-if-else.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld mgit .s demo-if-else.c -o main.elf
	/usr/bin/riscv64-unknown-elf-objcopy -O binary main.elf main.bin
startqemu: main.elf
	qemu-system-riscv32 -S -M virt -nographic -bios none -kernel main.elf -gdb tcp::1234


connectgdb: main.elf
	gdb-multiarch main.elf -ex "target remote localhost:1234" -ex "break _start" -ex "continue" -q

clean :
	rm -rf *.out *.bin *.elf c-asm.s float.s double.s const.s demo-if-else.s m.s a.out