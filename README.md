# Relapse-LCD
This Arduino project uses a 16x2 I2C LCD to display a sequence of lyrics with timed pauses between each message. The display runs in an infinite loop.

Message Sequence & Timing:
Pasindi na ng / ilaw — 5 seconds

Minumulto na 'ko / ng damdamin ko — 3 seconds

Ng damdamin ko — 2 seconds

How can we go / back to being — 3 seconds

friends — 1 second

Dinadalaw mo 'ko / bawat gabi — 5 seconds

How can you look / at me & pretend — 3 seconds

Haplos ramdam / parin sa dilim — 3 seconds

na-mamamayapa? — 1 second

Hindi na — 3 seconds

back to being — 1 second

friends — 1 second

When we just / shared a bed? — 3 seconds

Hey_sERi — 3 seconds

Requirements:
Arduino Uno (or compatible board)

16x2 LCD with I2C interface

Arduino IDE

How to Run:
Connect the LCD to Arduino:

SDA → A4 (Uno)

SCL → A5 (Uno)

Install the LiquidCrystal_I2C library in Arduino IDE.

Upload Relapse.ino to your Arduino.

The lyrics will display in sequence and loop indefinitely.

Made with ❤️ by SERI
