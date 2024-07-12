# Welcome to DragoPass EC Group!!!
git clone this repo for template files
# Policies
This assignment allows collaboration, online searching, generative AI. But please cite the origin of those content in your solution with comment. 

:black_medium_square: Citing others' work will not affect the result.

:x: Using other sources without citing will cause punishment.
# Questions
## Task1: Implementing Chassis Control
### Descriptions
Your are asked to implement the chassis control program.
I understand this sounds difficult, don't worry, I have constructed many helper functions for you.

### Hint
You may want to know these facts before solving this task:

The controller use CAN bus to communicate with motors. There are 2 CAN buses on a Robomaster Development Board C, denoted as CAN1, CAN2. Chassis motors are connected to CAN1. The motor distinguish signals on the bus with IDs. You may use arbitrary ID between [0,8] for this task as long as they are different from each other.

The chassis uses mecanum wheels to operate omni-directional movement. Feel free to search for it online.

### Useful Tools
Check chassis.h to see typedefs. Don't worry about undefined structs.
Helper functions are described in chassis.c

### Tasks
The program will run Chassis_Init once then run Chassis_Task repeatedly with 1ms delay every iteration.

The expect speed for the robot are stored in vx, vy, vw.

Chassis_Init: Initialize everything.
Chassis_Task:
1. Get motor data
2. Calculate the target speed for each motor.
3. Use PID to control the motor with currents
4. Send motor command

Check [Dev Standard](https://github.com/RM-DragoPass-EC-Group/.github/blob/main/profile/Development%20Standard/Development%20Standard.md) for info about dev standard.

### Grading
50% for implementing the program (Because you are not able to test whether the program will run, minor mistakes are accepted.)

10% each for implementing helper functions (PID_Init, Basic_PID_Controller, forward_kinematic, backward_kinematic)

9% for coding style (loose standard)

## Task2: Your Idea About Robomaster EC Group
### Tasks
Anything about Robomaster EC Group.

Creative ideas, innovative designs, comments, ...

Write a paragraph about it.

### Grading
1% for finishing

A little bonus for reasonable comments

A lot of bonus points for innovative ideas

# Submission
1. Write the solution for each question in different files.
2. Compress your answers into one .zip file.
3. Send the compressed file to ST_UAGV@link.cuhk.edu.cn
