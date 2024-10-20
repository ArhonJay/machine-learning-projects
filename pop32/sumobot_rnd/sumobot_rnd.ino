  
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

int infrared_threshold = 600; // change this value to the calibrated values in left and right IR
int distance_sensor_threshold = 1800; // change this value to the calibrated values in left and right Distance
int default_speed = 50; // please if maari ang palitan lang po ay yung default_speed, if nageerror sa max speed then go change it
int medium_speed = 80;
int max_speed = 100;

/*** Tips on infrared threshold, make sure that anything you will put there should be based if white or black threshold,

     How to know if infrared threshold?

     --- usually it is white when the value is greater than 600 values, but make sure na yung ilalagay niyo is kapag nakadetect ang bot ng 
     greater than the infrared_threshold, it will perform actions.  

     How to know if distance threshold?

     --- usually it is higher than 1800 values, but make sure na yung ilalagay niyo is kapag nakadetect ang bot ng 
     greater than the distance_sensor_threshold, it will move either left, right, or forward, depende sa nakadetect ng values.  

     How to handle speed?

    --- make sure na ang default speed and max_speed ay yung kayang ihandle ng robot      

    ALWAYS REMEMBER NA ANG ILALAGAY SA THRESHOLD AYYY YUNG VALUES NA NACACALIBRATE SA CALIBRATION PROGRAM.
***/

int RIGHT_LINE = A0;
int LEFT_LINE = A1;
int RIGHT_IR = A2;
int FRONT_IR = A6;
int LEFT_IR = A4;
int MEM;
int count = 0;

void setup() 
{
oled.text(0,16,"RnD");
oled.text(1,16,"ROBO");
oled.text(2,16,"REALM");

oled.text(4,0,"Press A or B to");
oled.text(5,0,"      Read Sensors");

oled.text(7,0,"Press OK to Run SUMO");
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
  oled.text(3,8,"SUMO");

  MEM = 1;
}

//STOP until OK BUTTON is PRESSED
//(5)FIVE Seconds Delay
//FIVESEC();
  oled.text(6,8,"  1  ");
  oled.show();
  beep();
  delay(880);
  oled.text(6,8,"  2  ");
  oled.show();
  beep();
  delay(880);
  oled.text(6,8,"  3  ");
  oled.show();
  beep();
  delay(880);
  oled.text(6,8,"  4  ");
  oled.show();
  beep();
  delay(880);
  oled.text(6,8,"  5  ");
  oled.show();
  beep();
  delay(880);
  oled.clear();
}

void loop() {

if(MEM == 0)
  {
    READSENSOR();
  }
else 
  {
    SUMO();
  }
}