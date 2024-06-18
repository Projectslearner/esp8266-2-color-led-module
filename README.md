# ESP8266 2-Color LED Module Project

#### Project Overview
The ESP8266 2-Color LED Module project demonstrates how to control a bi-color LED (red and green) using an ESP8266 microcontroller. This project introduces the basics of GPIO pin control on the ESP8266, making it an excellent starting point for learning how to interact with LEDs using a microcontroller.

#### Components Needed
- **ESP8266 Microcontroller**
- **2-Color LED Module (Red and Green)**
- **Jumper Wires**
- **Breadboard (optional)**

#### Block Diagram
*Insert block diagram here*

#### Circuit Setup
1. **Connecting the 2-Color LED to ESP8266:**
   - **Red LED Anode (redPin):** Connect to GPIO pin D5 on the ESP8266.
   - **Green LED Anode (greenPin):** Connect to GPIO pin D6 on the ESP8266.
   - **Common Cathode:** Connect to GND.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE, ensuring you have the ESP8266 board support installed.
   - Create a new sketch and copy the provided Arduino code for the ESP8266.
   - Connect the ESP8266 to your computer and select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - Once the code is uploaded, the LED will alternate between red and green colors, with each color displayed for 1 second.
   - Both LEDs will turn off for 1 second before repeating the cycle.

#### Applications
- **Indicator Lights:** Use LEDs as status indicators in various projects.
- **Visual Feedback:** Provide visual feedback in user interfaces or during debugging.
- **Learning Platform:** Understand and experiment with basic GPIO control and LED color control on the ESP8266.

#### Notes
- **GPIO Control:** The project uses `digitalWrite` to control the state of the GPIO pins connected to the LEDs.
- **Delays:** Delays are used to create the color-changing effect. You can adjust the delay times to change the speed of the color transitions.
- **Power Considerations:** Ensure that the ESP8266 and LEDs are properly powered, especially if using multiple LEDs or higher power LEDs.

---

#### Useful Links
🌐 [ProjectsLearner](https://projectslearner.com/learn/esp8266-2-color-led-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner