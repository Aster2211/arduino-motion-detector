# 🚦 Motion-Activated Visual Indicator System

An Arduino-based embedded systems project that utilizes a Passive Infrared (PIR) sensor to trigger visual alerts based on real-time motion detection. 

Built as part of an ongoing hands-on hardware series documenting real-world embedded electronics development.

## 📌 Features
- **Power-On Calibration Phase:** Dedicated 10-second stabilization window upon boot up.
- **Dynamic LED State Logic:**
  - 🔵 **Blue LED:** Active during sensor warm-up/calibration phase.
  - 🟢 **Green LED:** Area Clear state (No motion detected).
  - 🔴 **Red LED:** Motion Alert state (PIR sensor triggered).
- **Rapid Reset Tuning:** Calibrated potentiometer delays for immediate state transition cycles.

## 🛠️ Hardware Requirements
- **Microcontroller:** Arduino Uno R3
- **Sensor:** HC-SR501 PIR Motion Sensor Module
- **Outputs:** Red, Green, and Blue 5mm LEDs
- **Resistors:** 3x 1kΩ (Current limiting)
- **Prototyping:** Breadboard & Male-to-Male Jumper Wires

## 🔌 Circuit Pinout

| Component Pin | Arduino Pin | Notes |
| :--- | :--- | :--- |
| **PIR Sensor OUT** | Digital Pin 2 | Middle signal pin |
| **PIR VCC / GND** | 5V / GND | Power supply |
| **Red LED (Anode)** | Digital Pin 9 | Connects via 1kΩ resistor |
| **Green LED (Anode)**| Digital Pin 10 | Connects via 1kΩ resistor |
| **Blue LED (Anode)** | Digital Pin 11 | Connects via 1kΩ resistor |
| **LED Cathodes** | Common GND Rail | Connected to Arduino GND |

## ⚙️ Calibration & Troubleshooting Notes
- **Time Delay Adjust:** Turn the right-hand potentiometer on the HC-SR501 fully counter-clockwise to reduce output holding delay down to ~3 seconds.
- **Ground Continuity:** Ensure all LED cathodes share a common negative rail wired directly to the Arduino's GND pin.

## 📂 Repository Structure
- `PIR.ino` - Main Arduino sketch containing initialization and loop state logic.
