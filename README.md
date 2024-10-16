"# Solar-Tracker-with-Dust-Detection" 
It has integrated 5 LDR (Light Dependent Resistor) sensors, a thermistor, and a camera for monitoring panel conditions. 
The LDR sensors were used to detect light intensity from different angles and determine sun’s position, while the thermistor was used to monitor the panel’s temperature. 
Sensor data was acquired using NI DAQ USB-6001 and processed in LabVIEW. Controlling signals were given to Arduino Uno through DAQ card for controlling the servo motor angle which was for panel rotation. 
The camera provided visual feedback of the panel for dust detection. The image processing handled in MATLAB to estimate the percentage of area covered and determine whether it exceeds the pre-defined threshold. If the threshold is exceeded, the cleaning mechanism used to run ensuring optimal panel performance.
⚙️ Technologies Used: LabVIEW, MATLAB, Arduino, LDR Sensors, Thermistor, Servo Motor, Stepper Motor
📊 Concepts Explored: Data Acquisition, Real-Time Monitoring, Image Processing
