# RGB LED Project

This project uses an RGB LED to display multiple colors by controlling three individual LEDs (red, green, blue) inside one package.

---

## 🔌 Circuit Overview

- **Microcontroller**: Arduino UNO R3
- **Component**: Common cathode RGB LED
- **Resistors**: 3 × 220Ω (one for each color)
- **Power Source**: 5V from Arduino
- **Pins used**: Digital pins 9 (Red), 10 (Green), 11 (Blue)

---

## 🖼️ Breadboard Image

[RGB LED Circuit][IMG_0522](https://github.com/user-attachments/assets/ca207545-a232-420b-b53b-a9255513e530)
[RGB LED Circuit]![IMG_0522](https://github.com/user-attachments/assets/e7a570e5-a230-4231-926c-45e44cf79007)



---

## 💻 Code
See the file [rgb-led.ino](./rgb-led.ino).

---

## 💡 What I Learned

- How an RGB LED combines red, green, and blue light to make new colors
- The importance of using separate resistors for each color channel
- How PWM (analogWrite) controls brightness and mixes colors

---

## ⚠️ Troubleshooting Experience

- At first, one color did not light up because of a loose connection on the breadboard.
- Learned to test each color channel individually before combining them.
