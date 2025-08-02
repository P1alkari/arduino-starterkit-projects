🔊 Lesson 6 – Active Buzzer
This project demonstrates how to control an active buzzer with a digital output on the Arduino UNO.
The buzzer alternates between ON and OFF every second using digitalWrite().

🔌 Circuit Overview
Microcontroller: Arduino UNO R3

Components:

1 × Active Buzzer

Buzzer + → Pin 8

Buzzer - → GND

🖼️ Wiring
![Active Buzzer Circuit]

💻 Code
See active-buzzer.ino

💡 What I Learned
How to properly wire an active buzzer to Arduino

Importance of correct polarity (buzzer won’t sound if + and - are swapped)

Using digitalWrite() to generate simple ON/OFF signals

Basic timing control with delay()

✅ Notes
Initially, no sound came from the buzzer because the polarity was reversed

After swapping the connections, the buzzer worked as expected

For more complex tones, a passive buzzer and the tone() function would be needed

