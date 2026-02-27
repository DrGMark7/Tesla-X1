#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// --
#define PIN_TRIG 12
#define PIN_ECHO 13

#define STOP_DISTANCE 15.0  // Stop distance for break (cm)
#define LOG_DISTANCE 30.0   // Distance for start Log (cm)

// --- Motor Pins ---
#define M1_PWM 23
#define M1_IN1 27
#define M1_IN2 26

#define M2_PWM 21
#define M2_IN1 19
#define M2_IN2 18

// --- PWM Settings ---
#define PWM_FREQ 5000
#define PWM_RES 8  // Bit range for PWM 8 bit (0-255)

// --- Driving Physics (Tune here!) ---
#define ACCEL_STEP 0.9      // Accelarate in Gear D
#define BRAKE_STEP 1.8      // Deceleration (if much will stop early)

// --- Network Config ---
// Remote MAC Addr
const uint8_t REMOTE_ADDR[] = {0xE8, 0xD4, 0x84, 0x00, 0xFB, 0x3C};
// const uint8_t REMOTE_ADDR[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

#endif