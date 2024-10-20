void READSENSOR()
{

  oled.text(0,0,"  - RND ROBOREALM -");
  oled.text(1,0,"     READ SENSOR ");  

  oled.text(3,0,"Right Line : %d    ",analog(RIGHT_LINE));
  oled.text(4,0,"Left  Line : %d    ",analog(LEFT_LINE));
  oled.text(5,0,"Right  DS  : %d    ",analog(RIGHT_IR));
  oled.text(6,0,"Front  DS  : %d    ",analog(FRONT_IR));
  oled.text(7,0,"Left   DS  : %d    ",analog(LEFT_IR));
  oled.show();
  delay(200);
}