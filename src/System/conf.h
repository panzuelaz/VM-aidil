#ifndef CONF_H
#define CONF_H

#include <Arduino.h>
#include "stddef.h"
#include "SoftwareSerial.h"


//PIN
#define RXD1        4
#define TXD1        2

#define LINE_1          6
#define LINE_2          7
#define LINE_3          8
#define LINE_4          9
#define LINE_5          10
#define LINE_6          11
#define LINE_7          12
#define LINE_8          13
#define LINE_9          31
#define LINE_10         33
#define COLUMN_1        35
#define COLUMN_2        37
#define COLUMN_3        39


// uart
#define BAUDRATE_DEBUG          9600
#define BAUDRATE_PC_COMM        9600
#define INIT_DEBUG              Serial.begin(BAUDRATE_DEBUG);
#define INIT_PC_COMM            Serial1.begin(BAUDRATE_PC_COMM);

#define DBG(str)                Serial.print(str);
#define DBGLN(str)              Serial.println(str);
#define WRT_PC_COMM(str)        Serial1.print(str);
#define WRT_PC_COMM_LN(str)     Serial1.println(str);


//Firmware Version Variables!
// const char *firmwareVersion;

#endif