# LDR Light Sensor Project

## Overview
This Arduino project reads analog values from a Light Dependent Resistor (LDR) connected to analog pin A0 and displays the light intensity as both raw sensor values and a percentage.

## Components Required
- Arduino board (Uno, Nano, etc.)
- Light Dependent Resistor (LDR)
- 10kΩ resistor (pull-down resistor)
- Jumper wires
- USB cable for programming

## Circuit Setup
1. Connect the LDR to **5V** on one end
2. Connect the other end of the LDR to **analog pin A0**
3. Connect a 10kΩ resistor from pin A0 to **GND** (voltage divider circuit)

## How It Works
- The LDR resistance changes based on light exposure
- The voltage divider circuit converts resistance changes to analog voltage
- The Arduino reads this voltage and maps it to a percentage (0-100%)
- Values are printed to the Serial Monitor every 300ms

## Serial Output Format
