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
    
    struct sensor sensor_list[10]= {0};
    struct sensor tmp = {0};    
    unsigned int sensor_count = 0;  
    unsigned int add_sensor = 0;    

    while(1){
        if(sensor_count >= 10){
            printf("No slots to add more sensors!\n");
            break;
        }
        add_sensor = 0;
        printf("Add new sensor? (1-yes, 0-no): ");
        scanf("%u", &add_sensor); // Read user input for adding a new sensor
        scanf("%*c"); // Clear newline character from input buffer

        if(add_sensor == 0){
            break;
        } 
        
        printf("Enter sensor ID: ");
        scanf("%hhu", &tmp.id);  // Read sensor ID
        scanf("%*c"); // Clear newline character from input buffer  

        printf("Enter sensor Name: "); // Read sensor Name  
        scanf("%s", tmp.name);
        scanf("%*c"); // Clear newline character from input buffer

        char type;
        printf("Enter sensor Type (t - temperature, h - humidity, p - pressure): ");
        scanf(" %c", &type);
        scanf("%*c"); // Clear newline character from input buffer
        switch (type)
        {
        case 't': tmp.type = TEMPERATURE;
        
            break;
        case 'h': tmp.type = HUMIDITY;
        
            break;
        case 'p': tmp.type = PRESSURE;
        
            break;

        default:
            break;
        }

       /* add_sensor = 0;
        printf("Add new sensor? (1-yes, 0-no): ");
        scanf("%u", &add_sensor); // Read user input for adding a new sensor
        scanf("%*c"); // Clear newline character from input buffer

        if(add_sensor == 0){
            break;
        }   
        printf("Enter sensor ID: ");    
        scanf("%c", &tmp.id);  // Read sensor ID
        scanf("%*c"); // Clear newline character from input buffer

        printf("Enter sensor Name: "); // Read sensor Name   
        scanf("%s",(char *)&tmp.name); 
        scanf("%*c"); // Clear newline character from input buffer

        printf("Enter sensor Type: "); // Read sensor type   
        scanf("%s",(char *)&tmp.type); 
        scanf("%*c"); // Clear newline character from input buffer

        tmp.status = INACTIVE; // Set sensor status to ACTIVE by default*/
        
        switch (tmp.type)
        {
        case  TEMPERATURE:
            printf("min :");
            scanf("%hd",&tmp.value.temp.min); // variable tmp after the union value and then temp and then min  
            scanf("%*c"); // Clear newline character from input buffer

            printf("max :");
            scanf("%hd",&tmp.value.temp.max);
            scanf("%*c"); 

            printf("reading :");
            scanf("%f",&tmp.value.temp.reading);
            scanf("%*c"); 
            break;
        case HUMIDITY:
            printf("calibration :");
            scanf("%f",&tmp.value.humidity.calibration);
            scanf("%*c"); 

            printf("reading :");
            scanf("%f",&tmp.value.humidity.reading);
            scanf("%*c"); 
            break;
        case PRESSURE:
            printf("altitude :");
            scanf("%hd",&tmp.value.pressure.altitude);
            scanf("%*c"); 

            printf("reading :");
            scanf("%f",&tmp.value.pressure.reading);
            scanf("%*c"); 
            break;
        
        default:
            break;
        }
    }

    printf("Sensor ID: %u\n", tmp.id);
    printf("Sensor Name: %s\n", tmp.name);
    printf("Sensor Type: %u\n", tmp.type);
    
    //printf("Size of sensor structure: %lu bytes\n", sizeof(struct sensor));
    return 0;
}