# steering-safety-monitor

This project contains a sample C program that demonstrates basic safety monitoring for steering systems. It continuously checks steering angles against a predefined safe limit and reports when those limits are exceeded.

## Overview

Electric power steering (EPS) systems must ensure that steering angles remain within safe bounds to protect both the vehicle and occupants. The sample code in this repository simulates an array of steering angle readings and checks each value against a maximum safe angle threshold. If a reading exceeds the threshold, the program prints a warning message. This example can serve as a starting point for implementing more sophisticated safety monitoring.

## Features

- Reads a series of simulated steering angle measurements.
- Compares each measurement against a configurable maximum safe angle.
- Outputs warnings when the steering angle exceeds the safe limit.
- Provides a clear and simple demonstration of safety monitoring logic for EPS systems.

## Getting Started

To compile and run the example program, ensure you have a C compiler installed (e.g., gcc). Then execute the following commands from the repository root:

```bash
gcc -o steering_safety_monitor main.c
./steering_safety_monitor
```
Feel free to modify the `max_safe_angle` value or the array of sample angles in `main.c` to match your system's requirements.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
