# Embedded Systems Laboratory Projects

This repository contains a collection of Arduino and C# projects developed for an Embedded Systems course. The projects demonstrate various concepts in embedded systems programming, from basic LED control to more complex applications involving sensors, motors, and user interfaces.

## Lab Assignments

### Lab A4: LED Sequencing
- **File**: [DelosReyes_LabA4.ino](DelosReyes_LabA4/DelosReyes_LabA4.ino)
- **Description**: A basic LED sequencing program that lights up 4 LEDs in sequence with decreasing delay times.
- **Components**: 4 LEDs, resistors, Arduino
- **Concepts**: Digital output, delays, loops

### Lab A5: Input-Controlled LED Patterns
- **File**: [DelosReyes_LabA5.ino](DelosReyes_LabA5/DelosReyes_LabA5.ino)
- **Description**: Controls LED patterns based on the state of two input pins.
- **Components**: 4 LEDs, 2 buttons/switches, resistors, Arduino
- **Concepts**: Digital input, conditional statements, LED patterns

### Lab A6: Analog Input for LED Control
- **File**: [DelosReyes_LabA6.ino](DelosReyes_LabA6/DelosReyes_LabA6.ino)
- **Description**: Uses analog input to control LED sequencing behavior.
- **Components**: 4 LEDs, potentiometer, resistors, Arduino
- **Concepts**: Analog input, mapping values, serial monitoring

### Lab A7: Music and Light Show
- **File**: [DelosReyes_LabA7.ino](DelosReyes_LabA7/DelosReyes_LabA7.ino)
- **Description**: Plays a melody ("You Are My Sunshine") while controlling LED brightness based on the notes.
- **Components**: 3 LEDs, speaker/buzzer, potentiometer, resistors, Arduino
- **Concepts**: Tone generation, PWM for LED brightness, arrays for storing musical notes

### Lab A9: Servo Control and 7-Segment Display
- **File**: [DelosReyes_LabA9.ino](DelosReyes_LabA9/DelosReyes_LabA9.ino)
- **Description**: Controls a servo motor and displays a counter on a 7-segment display.
- **Components**: Servo motor, 7-segment display, button, status LEDs, Arduino
- **Concepts**: Servo library, 7-segment display control, timing operations

### Lab 10: Stepper Motor Control via Serial
- **File**: [DelosReyes_Lab10.ino](DelosReyes_Lab10/DelosReyes_Lab10.ino)
- **Description**: Controls a stepper motor based on commands received via serial communication.
- **Components**: Stepper motor, motor driver, Arduino
- **Concepts**: Stepper motor library, serial communication, string parsing

## Projects

### Midterm Project: Advanced LED Control
- **File**: [DelosReyes_Midterms.ino](DelosReyes_Midterms/DelosReyes_Midterms.ino)
- **Description**: Controls 8 LEDs with variable patterns based on analog input.
- **Components**: 8 LEDs, potentiometer, resistors, Arduino
- **Concepts**: Analog input mapping, LED sequencing, variable parameters

### Final Project: Temperature Control System
- **File**: [Finals_Embesys.ino](Finals_Embesys/Finals_Embesys.ino)
- **Description**: A comprehensive temperature control system with user interface.
- **Components**: DHT11 temperature/humidity sensor, I2C LCD display, heater, fan, buttons, status LEDs, Arduino
- **Concepts**: Sensor reading, LCD display, temperature control, safety features, user interface

### Stepper Motor Control Application
- **Files**: [StepMotor_DelosReyes](StepMotor_DelosReyes/)
- **Description**: A Windows Forms application that provides a graphical interface for controlling a stepper motor connected to an Arduino.
- **Components**: C# Windows Forms application, Arduino with stepper motor (from Lab 10)
- **Concepts**: Serial communication from C#, GUI development, stepper motor control

## Setup Instructions

### Arduino Projects
1. Connect the components according to the pin assignments in each sketch
2. Upload the corresponding .ino file to your Arduino board
3. Power the Arduino and observe the behavior

### Stepper Motor Control Application
1. Upload the DelosReyes_Lab10.ino sketch to your Arduino
2. Connect the stepper motor to the Arduino as specified in the sketch
3. Open the StepMotor_DelosReyes solution in Visual Studio
4. Build and run the application
5. Select the appropriate COM port, direction, degrees, and RPM
6. Click "Run" to control the stepper motor

## Author
Eric Delos Reyes
