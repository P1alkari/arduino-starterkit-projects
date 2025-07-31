# 🔘 Lesson 5 – Digital Inputs

This project demonstrates using **two push buttons** as digital inputs to control an LED.  
Button A turns the LED **ON**, and Button B turns it **OFF**, using `INPUT_PULLUP` mode.

---

## 🔌 Circuit Overview

- **Microcontroller:** Arduino UNO R3
- **Components:**
  - 1 × LED (Pin 5 → 220Ω → GND)
  - 2 × Push buttons:
    - Button A → Pin 9 → GND
    - Button B → Pin 8 → GND
- **Mode:** Internal pull-up resistors (`INPUT_PULLUP`) used for buttons

---

## 🖼️ Wiring

![Digital Inputs Circuit]

---

## 💻 Code

See [digital-inputs.ino](./digital-inputs.ino)

---

## 💡 What I Learned

- How to read button states using `digitalRead()`
- Why `INPUT_PULLUP` is useful (no external resistor required)
- Active-low logic: button not pressed = `HIGH`, pressed = `LOW`
- Basic LED control via `digitalWrite()`

---

## ✅ Notes

- The project worked on the first try, no troubleshooting needed
- Both buttons pressed simultaneously → **Button B (OFF)** wins because it’s read last
- Could add debounce or toggling logic as an extension

---

