aydis: c-asm.c m.s
	/usr/bin/riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s c-asm.c -S


startqemu: main.elf
	qemu-system-rv32i -S -M virt -nographic -bios none -kernel main.elf -gdb tcp::1234


connectgdb: main.elf
	gdb-multiarch main.elf -ex "target remote localhost:1234" -ex "break _start" -ex "continue" -q

clean :
	rm -rf *.out *.bin *.elf c-asm.s