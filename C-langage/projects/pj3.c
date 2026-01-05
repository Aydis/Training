#include <stdio.h>

enum SensorType {
    TEMPERATURE,
    HUMIDITY,
    PRESSURE
};
enum SensorStatus {
    ACTIVE,
    INACTIVE,
    ERROR
};

struct temp_data
{
    short int min;
    short int max;
    float reading;
}__attribute__((packed));

struct humidity_data
{
    float calibration;
    float reading;
}__attribute__((packed));

struct pressure_data
{
    short int altitude;
    float reading;
}__attribute__((packed));

union reading
{
    struct temp_data temp;
    struct humidity_data humidity;
    struct pressure_data pressure;
}__attribute__((packed));

struct sensor
{
    unsigned char id;
    char name[20];
    enum SensorType type;
    enum SensorStatus status;
    union reading value;
}__attribute__((packed));

int main(){
    
    printf("Size of sensor structure: %lu bytes\n", sizeof(struct sensor));
    return 0;
}