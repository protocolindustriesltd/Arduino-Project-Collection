# Arduino Wiring Guide

This guide explains safe and correct wiring practices for Arduino projects.

---

## 🔌 Power Pins

| Pin | Description |
|------|-------------------|
| 5V | Regulated 5V output |
| 3.3V | 3.3V output |
| GND | Ground |
| VIN | External power input (7–12V) |

⚠️ Never connect external voltage directly to 5V pin.

---

## 📥 Digital Pins
- Used for ON/OFF signals
- Pins: D0 – D13
- PWM pins: 3, 5, 6, 9, 10, 11

---

## 📊 Analog Pins
- Used for sensors
- Pins: A0 – A5
- Reads values from 0–1023

---

## 💡 LED Wiring Example
- Long leg → Digital pin
- Short leg → Resistor → GND
- Typical resistor: 220Ω – 330Ω

---

## 🌡 Sensor Wiring Rules
- VCC → 5V or 3.3V (check datasheet)
- GND → GND
- Signal → Analog or Digital pin

---

## ⚠️ Common Wiring Mistakes
❌ No resistor with LED  
❌ Reversed polarity  
❌ Wrong voltage sensor  
❌ Loose breadboard connections  

---

## 🛡 Safety Tips
- Disconnect power before rewiring
- Avoid short circuits
- Use color-coded wires (Red = VCC, Black = GND)

---

Good wiring = Stable project ✅
