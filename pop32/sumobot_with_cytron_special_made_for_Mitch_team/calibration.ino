void Calibration() 
{
  
  int irL = analog(left_ir);
  int irR = analog(right_ir);

  int dist_L = in(distance_L);
  int dist_R = in(distance_R);

  oled.text(3,0,"L = %d  ", irL);
  oled.show();

  oled.text(4,0,"R = %d  ", irR);
  oled.show();
  
  oled.text(5,0,"DL = %d  ",  dist_L);
  oled.show();

  oled.text(6,0,"DR = %d  ",  dist_R);
  oled.show();
}