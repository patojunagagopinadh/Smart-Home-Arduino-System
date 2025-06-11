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

##   Block Diagram

![WhatsApp Image 2025-06-11 at 13 03 00_7c0b076a](https://github.com/user-attachments/assets/4468f893-6014-465b-a4fb-6146df66a2a7)

## 🖼 Screenshots
![Hardware setup](https://github.com/user-attachments/assets/2da2fb66-9afd-4188-9ac0-526453aef251)

![turns on light and rotats motor opening door after detecting motion](https://github.com/user-attachments/assets/6f5cd1a4-50dc-44c6-8e0b-4898f6c3df77)

![turns on red light after gas detection](https://github.com/user-attachments/assets/353876ce-e8b5-4e62-8ae8-fe436c86c116)



## ⚙ How to Run

1. Connect the sensors as per the circuit diagram.
2. Upload the .ino file using Arduino IDE.
3. Open the Serial Monitor at 9600 baud to see real-time outputs.
4. Test each sensor by approaching or releasing gas (e.g., lighter without flame).
