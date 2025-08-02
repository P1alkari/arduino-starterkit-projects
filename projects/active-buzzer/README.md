# 🔔 Lesson 6 – Active Buzzer

This project demonstrates how to drive an **active buzzer** using a digital output pin.  
An active buzzer contains its own oscillator, so it only needs **HIGH/LOW** (no PWM/tone).

---

## 🔌 Circuit Overview

- **MCU:** Arduino UNO R3  
- **Buzzer:** Active buzzer (2 pins: **+** and **–**)  
- **Wiring (typical):**
  - **Buzzer +** → **D8** (or any digital pin)
  - **Buzzer –** → **GND**
- *(Optional)* A small series resistor (e.g., 100–220 Ω) can limit current/harshness, but most kit buzzers work directly from a digital pin.

> If your module has **S / + / –** pins:  
> **S** → D8, **+** → 5V, **–** → GND.  
> If it only has **+ / –**: connect **+** to D8 and **–** to GND.

---

## 🖼️ Wiring

![Active Buzzer Wiring](./wiring.jpg)

---

## 💻 Code

See [`active-buzzer.ino`](./active-buzzer.ino) for a simple on/off beep pattern.

---

## 💡 What I Learned

- The difference between **active** and **passive** buzzers (active = digital on/off, passive = needs `tone()`/PWM).
- Driving an output device with `digitalWrite(HIGH/LOW)`.
- Checking pin polarity on the buzzer/module before powering.

---

## ⚠️ Troubleshooting Notes

- **No sound:** I initially connected the wires to the **wrong pins/opposite side** of the buzzer, so it didn’t make any sound.  
  Fix: Ensure **+** goes to the **signal pin (D8 or S)** and **–** to **GND** (or **+** to 5V if the module expects it, and **S** to D8).
- If the buzzer is very quiet or harsh, try a small **series resistor** (100–220 Ω) or shorter duty cycle.



