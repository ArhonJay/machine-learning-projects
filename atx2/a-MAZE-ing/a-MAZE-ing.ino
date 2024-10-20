#include <ATX2.h>	// ATX2 Board
void setup() {
  OK();	// ATX2 initialize
  // user setup code below this line..
    uart1_set_baud(9600);
}

void loop() {
  // user loop code below this line..
  if (uart1_available()) {
    byte val = uart1_getkey();
    if (val == 56) {
      motor(ALL, 30);
    }
    else if (val == 50) {
      motor(ALL, -30);
    }
    else if (val == 52) {
      motor(1, 0);
      motor(2, 30);
    }
    else if (val == 54) {
      motor(1, 30);
      motor(2, 0);
    }
    else {
      motor(ALL, 0);
    }
  }
}
