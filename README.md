\# ECE 528/L - Robotics and Embedded Systems with Lab



\*\*California State University, Northridge\*\*



\*\*Department of Electrical and Computer Engineering\*\*



\## Lab 2: Reflectance Sensor



\### Overview



This lab implements an interface between the TI MSP432P401R LaunchPad and the 8-Channel QTRX Reflectance Sensor Array on the TI-RSLK MAX chassis. The sensor array detects black lines on a white surface and returns an 8-bit value representing the state of the eight reflectance sensors.



The program prints the sensor reading in binary through the CCS serial terminal. It also identifies predefined line positions and uses the built-in LEDs to indicate the detected position.



\### Components Used



\- TI MSP432P401R LaunchPad

\- TI-RSLK MAX chassis

\- 8-Channel QTRX Reflectance Sensor Array

\- Six AA batteries

\- USB-A to Micro-USB cable

\- White paper

\- Black tape

\- Code Composer Studio

\- Git and GitHub



\### Implementation



The following functions were completed:



\- `Print\_Binary()` prints an 8-bit unsigned value in binary format.

\- `Reflectance\_Sensor\_Init()` configures the IR LED controls and sensor output pins.

\- `Reflectance\_Sensor\_Read()` charges the sensor outputs, measures their discharge states, and returns the resulting 8-bit sensor value.

\- `Detect\_Line\_Position()` uses a switch statement to identify predefined line positions and control the built-in LEDs.



\### Line Detection



| Line Position | Sensor Value | LED1 | RGB LED |

|---|---|---|---|

| Center | `00011000` | Off | Green |

| Slightly left from center | `00011100` | Off | Yellow |

| Slightly right from center | `00111000` | Off | Pink |

| Far left from center | `00000001` | Off | White |

| Far right from center | `10000000` | Off | Sky blue |

| Left turn | `11111000` | On | White |

| Right turn | `00011111` | On | Sky blue |

| T-intersection | `11111111` | Off | Blue |

| Dead end | `00000000` | Off | Red |

| Other value | Any other pattern | Off | Off |



\### Analysis and Results



The reflectance sensor was successfully initialized and tested. The serial terminal displayed changing 8-bit binary values when the sensor array was moved between white paper and dark surfaces. This confirmed that the individual sensor channels responded to changes in surface reflectivity.



During testing, values such as `01001111` and `00000111` were observed as the position of the surface changed beneath the sensor. The built-in RGB LED changed according to recognized sensor patterns.



\### Terminal Output



!\[Reflectance sensor serial terminal output](Screenshots/ece528L\_lab2\_reflectance\_sensor\_terminal\_output.png)



\### Known Issues and Limitations



Sensor readings can vary depending on the height of the sensor above the surface, room lighting, tape width, surface reflectivity, and the discharge-time parameter. Some physical line positions may not produce the exact predefined binary value without adjusting the sensor position or calibration time.



\### Author Contributions



\- \*\*Aolany Acosta:\*\* Implemented and tested the reflectance sensor initialization, sensor-reading logic, binary-output function, line-position detection, LED output behavior, documentation, and GitHub submission.
- \*\*Hernan Zapien Robles:\*\* Assisted with hardware testing by moving the reflectance sensor across black and white surfaces, monitoring the binary sensor readings, and verifying that the LEDs responded correctly to changes in surface reflectivity.



\### References



\- ECE 528/L, \*Lab 2: Reflectance Sensor\*, California State University, Northridge, Fall 2026.

\- Pololu, \[QTRX-HD-08A Reflectance Sensor Array](https://www.pololu.com/product/3672).

\- Texas Instruments, \*MSP432P401R SimpleLink Microcontroller LaunchPad Development Kit User's Guide\*.

\- OpenAI, ChatGPT, assistance with code debugging, Git workflow, and README organization, accessed October 10, 2026.

