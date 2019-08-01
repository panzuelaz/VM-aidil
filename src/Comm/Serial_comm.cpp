#include "Serial_comm.h"


void pins_setup()
{
    pinMode(LINE_1, OUTPUT);
    pinMode(LINE_2, OUTPUT);
    pinMode(LINE_3, OUTPUT);
    pinMode(LINE_4, OUTPUT);
    pinMode(LINE_5, OUTPUT);
    pinMode(LINE_6, OUTPUT);
    pinMode(LINE_7, OUTPUT);
    pinMode(LINE_8, OUTPUT);
    pinMode(LINE_9, OUTPUT);
    pinMode(LINE_10, OUTPUT);
    pinMode(COLUMN_1, OUTPUT);
    pinMode(COLUMN_2, OUTPUT);
    pinMode(COLUMN_3, OUTPUT);

    // pinMode(PIN_14, LOW);
    // pinMode(PIN_15, LOW);
    // pinMode(PIN_16, LOW);
    // pinMode(PIN_17, LOW);
    // pinMode(PIN_18, LOW);
    // pinMode(PIN_19, LOW);
    // pinMode(PIN_20, LOW);
    // pinMode(PIN_21, LOW);
    // pinMode(PIN_22, LOW);
    // pinMode(PIN_23, LOW);
    // pinMode(PIN_24, LOW);
    // pinMode(PIN_25, LOW);
    // pinMode(PIN_26, LOW);
    // pinMode(PIN_27, LOW);
    // pinMode(PIN_28, LOW);
    // pinMode(PIN_29, LOW);
    // pinMode(PIN_30, LOW);

    DBGLN("All pins has been set to LOW.");
    DBGLN("Serial1 RXS is on pin: "+String(RXD1));
    DBGLN("Serial1 TXS is on pin: "+String(TXD1));
}


void dispense_product_01()
{
    DBGLN("Dispensing product no. 01");

    digitalWrite(LINE_1, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_1, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("1");
}


void dispense_product_02()
{
    DBGLN("Dispensing product no. 02");
    
    digitalWrite(LINE_2, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_2, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("2");
}


void dispense_product_03()
{
    DBGLN("Dispensing product no. 03");
    
    digitalWrite(LINE_3, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_3, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("3");
}


void dispense_product_04()
{
    DBGLN("Dispensing product no. 04");
    
    digitalWrite(LINE_4, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_4, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("4");
}


void dispense_product_05()
{
    DBGLN("Dispensing product no. 05");
    
    digitalWrite(LINE_5, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_5, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("5");
}


void dispense_product_06()
{
    DBGLN("Dispensing product no. 06");
    
    digitalWrite(LINE_6, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_6, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("6");
}


void dispense_product_07()
{
    DBGLN("Dispensing product no. 07");
    
    digitalWrite(LINE_7, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_7, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("7");
}


void dispense_product_08()
{
    DBGLN("Dispensing product no. 08");
    
    digitalWrite(LINE_8, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_8, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("8");
}


void dispense_product_09()
{
    DBGLN("Dispensing product no. 09");
    
    digitalWrite(LINE_9, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_9, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("9");
}


void dispense_product_10()
{
    DBGLN("Dispensing product no. 10");
    
    digitalWrite(LINE_10, HIGH);
    digitalWrite(COLUMN_1, HIGH);
    delay(2000);
    digitalWrite(LINE_10, LOW);
    digitalWrite(COLUMN_1, LOW);
    WRT_PC_COMM_LN("10");
}


void dispense_product_11()
{
    DBGLN("Dispensing product no. 11");

    digitalWrite(LINE_1, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_1, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("1");
}


void dispense_product_12()
{
    DBGLN("Dispensing product no. 12");
    
    digitalWrite(LINE_2, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_2, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("2");
}


void dispense_product_13()
{
    DBGLN("Dispensing product no. 13");
    
    digitalWrite(LINE_3, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_3, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("3");
}


void dispense_product_14()
{
    DBGLN("Dispensing product no. 14");
    
    digitalWrite(LINE_4, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_4, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("4");
}


void dispense_product_15()
{
    DBGLN("Dispensing product no. 15");
    
    digitalWrite(LINE_5, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_5, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("5");
}


void dispense_product_16()
{
    DBGLN("Dispensing product no. 16");
    
    digitalWrite(LINE_6, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_6, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("6");
}


void dispense_product_17()
{
    DBGLN("Dispensing product no. 17");
    
    digitalWrite(LINE_7, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_7, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("7");
}


void dispense_product_18()
{
    DBGLN("Dispensing product no. 18");
    
    digitalWrite(LINE_8, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_8, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("8");
}


void dispense_product_19()
{
    DBGLN("Dispensing product no. 19");
    
    digitalWrite(LINE_9, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_9, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("9");
}


void dispense_product_20()
{
    DBGLN("Dispensing product no. 20");
    
    digitalWrite(LINE_10, HIGH);
    digitalWrite(COLUMN_2, HIGH);
    delay(2000);
    digitalWrite(LINE_10, LOW);
    digitalWrite(COLUMN_2, LOW);
    WRT_PC_COMM_LN("10");
}


void dispense_product_21()
{
    DBGLN("Dispensing product no. 21");

    digitalWrite(LINE_1, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_1, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("1");
}


void dispense_product_22()
{
    DBGLN("Dispensing product no. 22");
    
    digitalWrite(LINE_2, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_2, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("2");
}


void dispense_product_23()
{
    DBGLN("Dispensing product no. 23");
    
    digitalWrite(LINE_3, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_3, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("3");
}


void dispense_product_24()
{
    DBGLN("Dispensing product no. 24");
    
    digitalWrite(LINE_4, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_4, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("4");
}


void dispense_product_25()
{
    DBGLN("Dispensing product no. 25");
    
    digitalWrite(LINE_5, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_5, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("5");
}


void dispense_product_26()
{
    DBGLN("Dispensing product no. 26");
    
    digitalWrite(LINE_6, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_6, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("6");
}


void dispense_product_27()
{
    DBGLN("Dispensing product no. 27");
    
    digitalWrite(LINE_7, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_7, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("7");
}


void dispense_product_28()
{
    DBGLN("Dispensing product no.28");
    
    digitalWrite(LINE_8, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_8, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("8");
}


void dispense_product_29()
{
    DBGLN("Dispensing product no. 29");
    
    digitalWrite(LINE_9, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_9, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("9");
}


void dispense_product_30()
{
    DBGLN("Dispensing product no. 30");
    
    digitalWrite(LINE_10, HIGH);
    digitalWrite(COLUMN_3, HIGH);
    delay(2000);
    digitalWrite(LINE_10, LOW);
    digitalWrite(COLUMN_3, LOW);
    WRT_PC_COMM_LN("10");
}


void product_not_found()
{
    DBGLN("Product release number not found or failed!");
    WRT_PC_COMM_LN("0");
}


void clear_uart0_buffer()
{
    while (Serial.available() > 0)
    {
        Serial.read();
    }
}


void clear_uart1_buffer()
{
    while (Serial1.available() > 0)
    {
        Serial1.read();
    }
}