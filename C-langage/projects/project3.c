#include <stdio.h>

typedef enum {
    TEMPERATURE,
    HUMIDITY,
    PRESSURE
};

typedef enum {
    ACTIVE,
    INACTIVE,
    ERROR
} sensor_status;

typedef union 
{
    short int min_range;
    short int max_range;/* data */
    float reading;
} temperature;
struct 
{
    float calibration;
    float reading;
} humidity;


int main (){

}