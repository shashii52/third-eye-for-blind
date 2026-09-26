# Third Eye for the Blind

A wearable obstacle-detection prototype based on an Arduino microcontroller, an HC-SR04 ultrasonic sensor, a vibration motor, and a piezo buzzer.

## Project overview

The system measures the distance to an obstacle using an HC-SR04 ultrasonic sensor. When an obstacle is detected within the defined alert threshold, the Arduino activates both vibration and audio feedback.

## Hardware

- Arduino UNO/Nano
- HC-SR04 ultrasonic sensor
- Vibration motor
- Piezo buzzer
- Battery/power supply
- Breadboard/PCB
- Connecting wires and required resistors

## Example pin mapping used in this recreated implementation

| Component | Arduino pin |
|---|---|
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Vibration motor control | D6 |
| Buzzer | D7 |

**Important:** The college report describes the components and functionality but does not specify the original pin numbers. Confirm the wiring against the physical project before using this code with hardware.

## Software

- Arduino IDE
- C/C++ for Arduino

## How it works

1. Arduino sends a trigger pulse to the HC-SR04.
2. The sensor returns an echo after reflecting from an obstacle.
3. Arduino converts the echo time into distance.
4. If the measured distance is below 100 cm, vibration and buzzer alerts are activated.
5. The measured distance is printed to the Serial Monitor for testing.

## Project report

The `docs/` folder can contain the original college project report.

## Note about this repository

This repository contains a recreated implementation based on the documented functionality in the academic project report. It should not be presented as the original source-code file unless the original source is available.
