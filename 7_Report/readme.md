# Requirements
## Introduction
In this project I developed the temparature controlled vehicle seat heating system using Embedded C , Atmega328 Microcontroller and other equipments. In American and European countries, the temperature is very low and any electronic designer should make sure that his equipment should work efficiently in that whether. In our project, the sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly (i.e) It is automated to set the temparature as per the Atmospheric temparature by sensing it. Based on that our controller will set the heater to required temperature. The Heater will generate the heat and a LCD display will show requested the temperature. In our project we have used ATmega328 microcontroller along with temperature sensor, Switches, Heat generator,and LCD diplay,etc.

## Features
* The System will sense is driver or passenger seated or not.
* Driver or Passenger has the access to modify the temperature in the vehicle.
* Heater will generate the heat accordingly.
* The driver can request to set the temparature manually also.
* It is best for american and European Countries.
* Low cost and robust system.
* Modular Approach.
## SWOT- Strengths, and Weakness, Opportunities Threats
### Strengths
User Friendly
Easy to alter the temperature inside the vehicles.
Modular Approach
Low cost and Robust system.
### Weakness
Its only applicable for those countries which are having low temperature.
### Opportunities
It can be implemented by having both Heater and AC.
### Threats
Not suitable for average or high temperature places.
## 4W's and 1'H
### WHAT : Vehicle seat heating system
### WHERE : Used in Automotives
### WHEN : At low Temperatures
## Detail requirements
### High Level Requirements

   | ID   |      Description     | 
|----------|:-------------:|
| HLR_1 |  Microcontroller | 
| HLR_2 |  Temparature sensor  | 
| HLR_3 |  Heat generation | 
| HLR_4 |  Display  | 
| HLR_5 |  Software used |
### Low Level Requirements

   | ID   |      Description     |  
|----------|:-------------:|
| LLR_1 |  Atmega328 | 
| LLR_2 |  LM35 and ADC  | 
| LLR_3 |  ADC with PWM   | 
| LLR_4 |  LCD with LED | 
| LLR_5 |  Code blocks with AVR GCC Compiler |
| LLR_6 | SimulIDE |
# Block Diagram
![Block diagram Temparature control](https://user-images.githubusercontent.com/85438544/144353781-f402ca7b-aa63-4892-ba56-a038d47b2f38.jpg)
# Flow Chart
![Flow chart Temparature control](https://user-images.githubusercontent.com/85438544/144353805-39ae7d55-1767-4d69-be50-ac14edaf1e01.png)

## Output :
## When Requirements not met :
### Case 1: When both the Seat Switch and Heater switch OFF
![Both seat and heater switch turned off](https://user-images.githubusercontent.com/85438544/144426854-be0d2941-6b22-46df-82c8-eb42d44fc959.png)
### Case 2 : When Seat Switch is ON Heater switch is OFF
![Seat switch is on heaterswitch is off](https://user-images.githubusercontent.com/85438544/144427014-0fc27585-6f9e-4162-8cfb-d9c23b238969.png)
### Case 3 : When Seat switch is OFF Heater switch is ON .
![Seat switch off heatr switch on](https://user-images.githubusercontent.com/85438544/144427194-b4e97d12-5b04-4147-9221-b0eb3bf842b1.png)
### Case 4 : Both Switches are ON .
![both switches On](https://user-images.githubusercontent.com/85438544/144427262-b347bd54-6455-44f8-a572-faba70c7903b.png)
## Passing Cases :
### Both Switches ON
| No | Features |
| ---- | ---- |
| **20%** | ![20% duty cycle](https://user-images.githubusercontent.com/85438544/144424945-371a2914-876b-4826-98cd-352909fef523.png) |
| **40%** | ![40 % duty cycle](https://user-images.githubusercontent.com/85438544/144425003-be3f0993-a548-4d03-8303-949089c05ab7.png)|
| **70%** |![70% duty cycle](https://user-images.githubusercontent.com/85438544/144425054-26971fde-2f87-40bb-86f4-eb58b7af3c95.png)|
| **95%** | ![95% duty cycle](https://user-images.githubusercontent.com/85438544/144425071-c3f049fa-15b1-4eb4-91c7-c64af09e204f.png)|


