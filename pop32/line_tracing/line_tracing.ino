  
  /************************************************************************************************************

  ROBOSAPIENS READ THIS!!!

  Before starting, check if all the sensors is working, calibrate it and make sure to check the threshold values,
  make sure that wires are connected, and also make sure that the motors are working in right directions.
  
  Here is the checklist to verify that everything is working:

  --- Wires ---
  --- Motors ---
  --- IR Sensors ---
  --- Distance Sensors ---
  --- Battery ---
  --- Threshold Values ---

  That is all, and goodluck, if you've check everything and it still shows error, screenshot or picture the error
  and contact me at messenger, facebook or my email: sopenaaaronjay18@gmail.com

  ************************************************************************************************************/

#include <POP32.h>

  /** >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

   BELOW IS THE THRESHOLD VALUES, ONLY CHANGE THE VALUE OF THRESHOLD VALUES AND SPEED OF ROBOT TO ADJUST THE CODE
        IF YOU NEED TO CHANGE SOME PART OF CODE, MAKE SURE THAT YOU KNOW AND UNDERSTAND HOW IT WORK

  // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< **/

  int IR_LOWER_BOUNDARY = 600; // baguhin niyo toh depending sa detection ng black, ang ilalagay niyo diyang value is for blackkk!!!!
  int IR_UPPER_BOUNDARY = 3000; // baguhin niyo toh depending sa detection ng white, ang ilalagay niyo diyang value is for whiteee!!!!
  int speed = 80; // baguhin niyo toh if nababagalan kayo sa bot, or if masyadong mabilis, try niyo babaan pa if nagooff track!!!!

int RIGHT_LINE = A0;
int LEFT_LINE = A1;
int MEM;
int count = 0;

void setup() 
{
oled.text(0,16,"RnD");
oled.text(1,16,"ROBO");
oled.text(2,16,"REALM");

oled.text(4,0,"Press A or B to");
oled.text(5,0,"      Read Sensors");

oled.text(7,0,"Press OK to Run LINE");
oled.show();

waitAnykey_bmp();
oled.clear();
oled.show();
while(!SW_A() && !SW_B() && !SW_OK());
if(SW_A() || SW_B())
{
  MEM = 0;
  oled.text(0,0,"  - RND ROBOREALM -");
  oled.text(3,0,"     READ SENSOR ");
}
else if(SW_OK())
{
  oled.text(0,0,"  - RND ROBOREALM -");
  oled.text(3,8,"LINE");

  MEM = 1;
}
}

void loop() {

if(MEM == 0)
  {
    calibration();
  }
else 
  {
    line_trace();
  }
}