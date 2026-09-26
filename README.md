# Third Eye for the Blind

A wearable obstacle detection system designed to assist visually impaired users by detecting nearby obstacles and providing real-time alerts.

## 📌 Project Overview

Third Eye for the Blind is an assistive technology project developed using an Arduino microcontroller and an ultrasonic sensor. The system detects obstacles in the user's path and provides alerts through a vibration motor and buzzer.

## ⚙️ Components Used

- Arduino UNO/Nano
- HC-SR04 Ultrasonic Sensor
- Vibration Motor
- Piezo Buzzer
- Battery (9V/5V)
- Resistors and Connecting Wires
- Breadboard/PCB

## 🔧 How It Works

1. The HC-SR04 ultrasonic sensor sends ultrasonic waves.
2. The sensor measures the time taken for the echo to return.
3. The Arduino calculates the approximate distance of the obstacle.
4. When an obstacle is detected within the defined threshold, the system activates the vibration motor and buzzer.
5. The user receives a real-time warning about the nearby obstacle.

## 📊 Testing

The project was tested at different distances, including:

- 30 cm — Alert activated
- 50 cm — Alert activated
- 80 cm — Alert activated
- 120 cm — Alert not activated
- Above 200 cm — No alert

The project report describes obstacle detection up to approximately 200 cm.

## 🚀 Applications

- Assistive mobility for visually impaired users
- Wearable navigation assistance
- Indoor obstacle detection
- Embedded systems learning project

## 🔮 Future Scope

- GPS-based location assistance
- Voice alerts
- AI-based object recognition
- Mobile application connectivity
- Rechargeable power system

## 🛠️ Technologies

- Arduino
- Embedded C/C++
- HC-SR04 Ultrasonic Sensor
- Arduino IDE

