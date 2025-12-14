# Troubleshooting Arduino Projects

If your project is not working, follow this checklist.

---

## 🔴 Upload Errors

### ❌ COM Port Not Found
✔ Check USB cable  
✔ Reconnect Arduino  
✔ Install USB drivers  

---

### ❌ avrdude Error
✔ Correct board selected  
✔ Correct port selected  
✔ Close other serial apps  

---

## 🟡 Code Uploads but No Output

✔ Check wiring  
✔ Verify pin numbers  
✔ Check baud rate in Serial Monitor  
✔ Add delay() in loop  

---

## 🔵 Serial Monitor Issues

✔ Baud rate must match code  
✔ Close monitor before re-upload  
✔ Use `Serial.begin(9600);`

---

## 🟢 Sensor Not Responding

✔ Check power voltage  
✔ Verify sensor orientation  
✔ Test with simple sketch  

---

## 🧪 Debugging Tips
- Use `Serial.println()` often
- Test components individually
- Reduce project to minimum code

---

## 🆘 Still Stuck?
- Read project README
- Check Arduino reference
- Ask community / GitHub Issues

---

Troubleshooting is part of learning 🧠
