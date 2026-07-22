# 🔐 Smart IoT Door Lock System

An IoT-based Smart Door Lock built using Embedded Systems, ESP32, Firebase Realtime Database, and a responsive web dashboard. The system provides secure authentication, real-time monitoring, remote access, OTP-based unlocking, and intrusion detection.

---

## 📌 Overview

This project demonstrates a complete smart security solution that combines embedded programming, cloud connectivity, and a web-based monitoring dashboard.

The door lock continuously communicates with Firebase, allowing users to monitor and control the system remotely in real time.

---

## ✨ Features

- 🔒 Secure Door Lock Control
- 📲 Real-Time Monitoring Dashboard
- ☁️ Firebase Realtime Database Integration
- 🌐 Remote Door Unlock
- 🔑 OTP-Based Authentication
- 🚨 Intruder Detection after Multiple Failed Attempts
- 📜 Live Event Logging
- ⚡ Automatic Door Re-lock
- 📊 Door Status Monitoring
- 🔄 Instant Synchronization between Device and Dashboard

---

## 🏗 System Architecture

```
                User
                  │
                  ▼
        Web Dashboard (HTML/CSS/JS)
                  │
          Firebase Realtime Database
                  │
                  ▼
             ESP32 Controller
                  │
      ┌───────────┴───────────┐
      │                       │
 Servo Motor             Authentication
      │                   (Password / OTP)
      │
 Door Lock Mechanism
```

---

## 🛠 Technologies Used

### Embedded

- ESP32
- Embedded C++
- Arduino IDE

### Cloud

- Firebase Realtime Database

### Frontend

- HTML5
- CSS3
- JavaScript

### Security

- OTP Verification
- Password Authentication
- SHA-512 Cryptographic Demonstration

---

## 📂 Project Structure

```
Smart-Door-Lock/
│
├── dashboard.html        # Web Dashboard
├── crypt.cpp             # SHA-512 Demonstration
├── ESP32_Code.ino        # ESP32 Firmware
├── README.md
└── images/
    ├── dashboard.png
    ├── hardware.jpg
    └── architecture.png
```

---

## 🚀 How It Works

1. User enters the password or OTP.
2. ESP32 validates the credentials.
3. On successful authentication:
   - Door unlocks.
   - Event is logged.
   - Firebase updates instantly.
4. Dashboard displays:
   - Current door status
   - Latest event
   - Failed attempts
   - Event logs
5. If authentication fails repeatedly:
   - Intruder alert is triggered.
   - Warning is displayed on dashboard.
6. User can remotely unlock the door through the dashboard.
7. Door automatically locks after a predefined duration.

---

## 📊 Dashboard Features

- Live Door Status
- Remote Unlock Button
- OTP Generation
- Intruder Alert Banner
- Failed Attempt Counter
- Event Log Table
- Last Activity Information
- Firebase Live Synchronization

---

## 🔒 Security Features

- Password Authentication
- OTP Verification
- Failed Attempt Tracking
- Intruder Alert Generation
- Event Logging
- Cloud Synchronization
- Cryptographic Hash Demonstration (SHA-512 Concepts)

---

## 📸 Screenshots

Add screenshots here.

```
images/dashboard.png
images/hardware.jpg
images/circuit.png
```

---

## 🎯 Future Enhancements

- Fingerprint Authentication
- Face Recognition
- RFID Support
- Mobile Application
- Email Notifications
- SMS Alerts
- Camera Integration
- Voice Assistant Support
- AI-based Intruder Detection

---

## 📚 Learning Outcomes

This project helped in understanding:

- Embedded Systems Programming
- ESP32 Development
- IoT Architecture
- Firebase Cloud Integration
- Real-Time Database Communication
- Web Dashboard Development
- Authentication Mechanisms
- Embedded Security Concepts

---

## 👨‍💻 Author

**Divyansh Sharma**

B.Tech Computer Science Engineering  
VIT Vellore

---

## ⭐ If you found this project useful, don't forget to star the repository!
