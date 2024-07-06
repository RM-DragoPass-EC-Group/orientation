#ifndef _CHASSIS_H_
#define _CHASSIS_H_
#define hcan void    // This is a placeholder for the CAN handle

// You can use the constant below to implement kinetic conversions
#define WHEEL_RADIUS 0.05
#define WHEEL_DISTANCE 0.3  // Distance between wheels and center of the chassis

typedef struct
{
    float current_speed;    // Current speed of the motor
    //Code Omitted
}Motor_t;

typedef struct
{
    float kp;
    float ki;
    float kd;
    float max_out;
}PIDConfig_t;

typedef struct
{
	Motor_t *motor;
	PIDConfig_t speed_PID;
	float send_data;    // Current in mA
}driver_t;

void Chassis_Init(void);
void Chassis_Task(void);

#endif