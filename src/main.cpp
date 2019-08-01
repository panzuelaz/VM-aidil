#include "Comm/Serial_comm.h"
#include "System/conf.h"

char ProductRelease[5];

String receive() {
  String content = "";
  content = Serial.readStringUntil('\r' || '\n');
  return content;
  }


void setup()
{
  INIT_DEBUG;             // Init UART0
  INIT_PC_COMM;           // Init UART1

  pins_setup();           // Set GPIO pins
}


void loop()
{
  // Clear UARTs buffer
  // clear_uart0_buffer();
  // clear_uart1_buffer();


  /*****  CHECK COMMAND FROM APPS  *****/
  if (Serial.available())
  {
    receive().toCharArray(ProductRelease, sizeof(ProductRelease));
    // char ProductRelease = Serial.read();
    DBGLN(ProductRelease);

    if (ProductRelease[0] == 'a')
    {
      dispense_product_01();
    }

    if (ProductRelease[0] == 'b')
    {
      dispense_product_02();
    }

    if (ProductRelease[0] == 'c')
    {
      dispense_product_03();
    }

    if (ProductRelease[0] == 'd')
    {
      dispense_product_04();
    }

    if (ProductRelease[0] == 'e')
    {
      dispense_product_05();
    }

    if (ProductRelease[0] == 'f')
    {
      dispense_product_06();
    }

    if (ProductRelease[0] == 'g')
    {
      dispense_product_07();
    }

    if (ProductRelease[0] == 'h')
    {
      dispense_product_08();
    }

    if (ProductRelease[0] == 'i')
    {
      dispense_product_09();
    }

    if (ProductRelease[0] == 'j')
    {
      dispense_product_10();
    }

    if (ProductRelease[0] == 'k')
    {
      dispense_product_11();
    }

    if (ProductRelease[0] == 'l')
    {
      dispense_product_12();
    }

    if (ProductRelease[0] == 'm')
    {
      dispense_product_13();
    }

    if (ProductRelease[0] == 'n')
    {
      dispense_product_14();
    }

    if (ProductRelease[0] == 'o')
    {
      dispense_product_15();
    }

    if (ProductRelease[0] == 'p')
    {
      dispense_product_16();
    }

    if (ProductRelease[0] == 'q')
    {
      dispense_product_17();
    }

    if (ProductRelease[0] == 'r')
    {
      dispense_product_18();
    }

    if (ProductRelease[0] == 's')
    {
      dispense_product_19();
    }

    if (ProductRelease[0] == 't')
    {
      dispense_product_20();
    }

    if (ProductRelease[0] == 'u')
    {
      dispense_product_21();
    }

    if (ProductRelease[0] == 'v')
    {
      dispense_product_22();
    }

    if (ProductRelease[0] == 'w')
    {
      dispense_product_23();
    }

    if (ProductRelease[0] == 'x')
    {
      dispense_product_24();
    }

    if (ProductRelease[0] == 'y')
    {
      dispense_product_25();
    }

    if (ProductRelease[0] == 'z')
    {
      dispense_product_26();
    }

    if (ProductRelease[0] == '1')
    {
      dispense_product_27();
    }

    if (ProductRelease[0] == '2')
    {
      dispense_product_28();
    }

    if (ProductRelease[0] == '3')
    {
      dispense_product_29();
    }

    if (ProductRelease[0] == '4')
    {
      dispense_product_30();
    }

    // else
    // {
    //   product_not_found();
    // }
  }
}