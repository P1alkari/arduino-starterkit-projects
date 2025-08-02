# 🎵 Lesson 7 – Passive Buzzer

This lesson demonstrates driving a **passive buzzer** with `tone()` to generate tones and simple melodies.
A passive buzzer acts like a tiny speaker: it needs a frequency from the microcontroller (unlike an *active* buzzer).

---

## 🔌 Circuit

- **MCU:** Arduino UNO R3  
- **Buzzer (PASSIVE):** 2 pins → **Signal: D8**, **GND: GND**  
- *(Optional)* Series resistor 100–220 Ω to soften the sound

**Wiring notes**
- Passive buzzer expects a square wave → use `tone(pin, frequency, duration)`.
- If your module has **S / + / −**:  
  - **S** → D8, **+** → 5V, **−** → GND.  
- If it only has **+ / −**: **+** → D8, **−** → GND.

---

## 🖼️ Wiring & Demo

![Wiring](./wiring.jpg)

<!-- Optional video (mp4) -->
<!-- <video src="./demo.mp4" controls width="480"></video> -->

---

## 💻 Code

- [`passive-buzzer.ino`](./passive-buzzer.ino)  

---

## 💡 What I Learned

- Difference between **active** vs **passive** buzzers (passive uses `tone()`).
- How to generate tones with `tone(pin, freq, dur)` and stop with `noTone(pin)`.
- Basic timing for melodies using note durations and `delay()`.

---

## ⚠️ Troubleshooting

- **No sound:**  
  - Check that you’re using a **passive** buzzer for `tone()`.  
  - Verify wiring (signal on D8, other pin to GND).  
- **Very harsh/too loud:** add a small series resistor (100–220 Ω) or use shorter durations.  
- **Mixed up pins:** If you connect to the opposite pins/side, it may not sound at all. Re‑seat the wires.



---

## ✅ Status

- Worked after fixing wiring (correct pin → sound OK).  

