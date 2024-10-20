void calibration()
{

  oled.text(0,0,"  - RND ROBOREALM -");
  oled.text(1,0,"     READ SENSOR ");  

  oled.text(3,0,"Right Line : %d    ",analog(RIGHT_LINE));
  oled.text(4,0,"Left  Line : %d    ",analog(LEFT_LINE));
  oled.show();
  delay(200);
}