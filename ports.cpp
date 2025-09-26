// Ports for my ESP32 Car
#include <Arduino.h>
#include <header.h>

// Motor Treiber Ports
static int EnA = 0, EnB = 2;

static int In1 = 26, In2 = 27;
static int In3 = 14, In4 = 12;

//links motion sensor
static int lsm = 13;
//rechts motion sensor
static int rsm = 25;

//Liniensensor 
static int lsr = 16;
static int lsc = 17;
static int lsl = 5;

void pins() {
    pinMode(EnA, OUTPUT);
    pinMode(EnB, OUTPUT);

    pinMode(In1, OUTPUT);
    pinMode(In2, OUTPUT);
    pinMode(In3, OUTPUT);
    pinMode(In4, OUTPUT);

    pinMode(lsm, INPUT);
    pinMode(rsm, INPUT);

    pinMode(lsr, INPUT);
    pinMode(lsc, INPUT);
    pinMode(lsl, INPUT);
}

