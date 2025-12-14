# Board Driver Setup & Fixes

If your Arduino board is not detected, follow this guide.

---

## 🔵 Arduino Uno / Mega
- Drivers auto-install during IDE setup
- Usually no manual steps required

---

## 🟡 Arduino Nano (CH340 Chip)

### Problem:
Port not visible

### Solution:
Install CH340 driver:
- Windows: CH340 USB Driver
- macOS/Linux: Usually built-in

Restart system after installation.

---

## 🔴 Common Fixes

✔ Try another USB cable  
✔ Try another USB port  
✔ Close other Serial Monitor apps  
✔ Restart Arduino IDE  

---

## 🧪 Verification
Reconnect board and check:
Tools → Port → COM Port visible
