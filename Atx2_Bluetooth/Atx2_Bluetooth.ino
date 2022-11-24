#include <ATX2.h>	// ATX2 Board

void setup() {
  // Open serial communications and wait for port to open:
  OK();
  Serial.begin(9600);
  uart1_set_baud(9600);
  uart1("Hello World");
}

void loop() { // run over and over
  if (uart1_available()) {
    char val = uart1_getkey();
    Serial.print(val);
  }
}
