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
