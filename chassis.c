#include "chassis.h"

/*
    * @brief: Initialize the motor
    * @param: can_id: CAN ID of the motor
    * @param: can_num: CAN number of the motor
    * @retval: Motor_t: Pointer to the motor
    * @comment: e.g. Motor_t* motor1 = DJI_Motor_Init(1, &hcan1); // This initializes a motor with CAN ID 1 on CAN1
*/
Motor_t* DJI_Motor_Init(int can_id, hcan* can_num);

/*
    * @brief: Initialize the PID controller
    * @param: pid: Pointer to the PID controller
    * @param: kp: Proportional gain
    * @param: ki: Integral gain
    * @param: kd: Derivative gain
    * @param: max_out: Maximum output of the PID controller
    * @retval: none
    * @comment: e.g. 
        PIDConfig_t pid;
        PID_Init(&pid, 1.0, 0.1, 0.1, 1000); // This initializes a PID controller with gains 1.0, 0.1, 0.1 and max output 1000
*/
void PID_Init(PIDConfig_t* pid, float kp, float ki, float kd, float max_out);

/*
    * @brief: Send global variable
    * @param: tag: Tag of the message
    * @param: data: Data of the message
    * @retval: none
    * @comment: e.g. Robo_Send_Message_Cmd("velocity", 100); // This sends a value 100 to the global variable with the tag "velocity"
*/
void Robo_Send_Message_Cmd(char* tag, float data);

/*
    * @brief: Get global variable
    * @param: tag: Tag of the message
    * @param: data: Data of the message
    * @retval: none
    * @comment: e.g. 
        float temp;
        Robo_Get_Message_Cmd("velocity", temp); // This gets a value from the global variable with the tag "velocity", and save the value into temp
*/
void Robo_Get_Message_Cmd(char* tag, float* data);

/*
    * @brief: Forward kinematic
    * @param: vx: X velocity in m/s
    * @param: vy: Y velocity in m/s
    * @param: vw: Angular velocity in rad/s
    * @param: speed1: Speed of motor 1
    * @param: speed2: Speed of motor 2
    * @param: speed3: Speed of motor 3
    * @param: speed4: Speed of motor 4
    * @retval: none
    * @comment: e.g. 
        float speed1, speed2, speed3, speed4;
        forward_kinematic(1.0, 0.0, 0.0, &speed1, &speed2, &speed3, &speed4); // This calculates the speed of each motor given the velocity of the robot
*/
void forward_kinematic(float vx, float vy, float vw, float* speed1, float* speed2, float* speed3, float* speed4);

/*
    * @brief: Backward kinematic
    * @param: speed1: Speed of motor 1
    * @param: speed2: Speed of motor 2
    * @param: speed3: Speed of motor 3
    * @param: speed4: Speed of motor 4
    * @param: vx: X velocity in m/s
    * @param: vy: Y velocity in m/s
    * @param: vw: Angular velocity in rad/s
    * @retval: none
    * @comment: e.g. 
        float vx, vy, vw;
        backward_kinematic(1.0, 1.0, 1.0, 1.0, &vx, &vy, &vw); // This calculates the velocity of the robot given the speed of each motor
*/
void backward_kinematic(float speed1, float speed2, float speed3, float speed4, float* vx, float* vy, float* vw);

/*
    * @brief: Basic PID controller
    * @param: pid: Pointer to the PID controller
    * @param: target_value: Target value of the PID controller
    * @param: current_value: Current value of the PID controller
    * @retval: float: Output of the PID controller
    * @comment: e.g. 
        PIDConfig_t pid;
        float output = Basic_PID_Controller(&pid, 100, 50); // This calculates the output of the PID controller given the target value and current value
*/
float Basic_PID_Controller(PIDConfig_t* pid, float target_value, float current_value);

/*
    * @brief: Get data from the motor
    * @param: motor: Pointer to the motor
    * @retval: none
    * @comment: e.g. 
        Motor_t* motor1;
        Motor_Get_Data(motor1); // This gets the data from motor1
*/
void Motor_Get_Data(Motor_t* motor);

/*
    * @brief: Send data to the motor
    * @param: motor: Pointer to the motor
    * @param: data: Data to be sent to the motor
    * @retval: none
    * @comment: e.g. Motor_Send_Data(motor1, 100); // This set the current of motor1 to 100mA
*/
void Motor_Send_Data(Motor_t motor, float data);

void Chassis_Init(void){
    // TODO
}

void Chassis_Task(void){
    float vx, vy, vw;
    Robo_Get_Message_Cmd("vx", &vx);    // Expect forward/backward velocity in m/s
    Robo_Get_Message_Cmd("vy", &vy);    // Expect left/right velocity in m/s
    Robo_Get_Message_Cmd("vw", &vw);    // Expect angular velocity in rad/s

    // TODO
}
