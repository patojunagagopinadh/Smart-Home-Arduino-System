# Smart-Home-Arduino-System  🏠🤖
Arduino Uno powered smart appliance control system

This project is an *IoT-based smart house system* developed using Arduino. It integrates multiple sensors to provide safety, automation, and environment monitoring for a smart home.

## 🔧 Features

- 🚪 *PIR Motion Sensor* – Detects human movement and controls a servo (like a door or camera).
- 📏 *Ultrasonic Sensor* – Detects if someone enters the room; turns LED lights ON/OFF.
- 🌫 *MQ-2 Gas Sensor* – Monitors air quality and gas leaks; triggers LEDs and buzzer.
- 💡 *LED Indicators* – Red, Green, and White LEDs for security and light status.
- 🔄 *Servo Motor* – Rotates based on motion sensor to simulate smart mechanisms (e.g., open/close) is used as a main door to house.

## 🛠 Hardware Used

- Arduino Uno
- PIR Sensor
- HC-SR04 Ultrasonic Sensor
- MQ-2 Gas Sensor
- Servo Motor
- LEDs (Red, Green, White)
- Jumper wires, Breadboard, Power supply

## 💻 Code Overview

The main logic is divided into 3 functions:

- ultra() – Handles distance measurement and light control
- pir() – Controls servo based on movement
- mQgas() – Monitors gas levels and triggers LED indicators

## 🖼 Screenshots



## ⚙ How to Run

1. Connect the sensors as per the circuit diagram.
2. Upload the .ino file using Arduino IDE.
3. Open the Serial Monitor at 9600 baud to see real-time outputs.
4. Test each sensor by approaching or releasing gas (e.g., lighter without flame).
