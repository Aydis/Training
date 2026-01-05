#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float samples_per_second =44100.0;
    int tone_freq = 440;
    int duration = 2;
    int max_value_encoding = 32767;

    int i=0;
    int total_samples = duration * samples_per_second;

    float time=0.0;
    float angle;

    short int sample;

    FILE *f;
    f = fopen("sine.raw", "wb");
    
    if(f == NULL){
        printf("Error opening file!\n");
        return -1;
    }   

    while(i< total_samples){
        time = i *(1.0 / samples_per_second);
        angle = 2 * 3.14 * tone_freq *time;

        sample = max_value_encoding * sin(angle);

        i= i +1;

        fwrite(&sample, 2, 1, f);

      //  printf("%d\n", sample);

    }
    fclose(f);
    return 0;
}