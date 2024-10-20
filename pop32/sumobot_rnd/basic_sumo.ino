void SUMO()
{
  //Sensor Reading 
  //-->Minimum - 0
  //-->Maximum - 4095
  
  //Motor Speed
  //-->Minimum - 0
  //-->Maximum - 100
  //-->Forward - Positive (1 to 100)
  //-->Backward - Negative (-1 to -100)

  //If Right Line Sensor Detects White Line (Backward and Spin Left)
  if((analog(RIGHT_LINE) > infrared_threshold) && count == 0)   //
  {
    //Backward
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(50);
    
    //Spin Left
    motor(1,medium_speed);  //Right motor (FORWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(100);
    count = 1;
  }

 //If Left Line Sensor Detects White Line (Backward and Spin Right)
    else if((analog(LEFT_LINE) > infrared_threshold) && count == 0)
  {
    //Backward
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(50);
    
    //Spin Right
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,medium_speed);  //Left motor (FORWARD)
    delay(100);
    count = 1;
  }
  else if((analog(RIGHT_LINE) > infrared_threshold) && count == 1)   //
  {
    //Backward
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(200);
    
    //Spin Left
    motor(1,medium_speed);  //Right motor (FORWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(200);
    count = 1;
  }

 //If Left Line Sensor Detects White Line (Backward and Spin Right)
    else if((analog(LEFT_LINE) > infrared_threshold) && count == 1)
  {
    //Backward
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,-80);  //Left motor (BACKWARD)
    delay(200);
    
    //Spin Right
    motor(1,-80);  //Right motor (BACKWARD)
    motor(2,medium_speed);  //Left motor (FORWARD)
    delay(200);
    count = 1;
  }  
 //If Front Distance Sensor Detects Oponent (FULL SPEED FORWARD)
   else if(analog(FRONT_IR) > distance_sensor_threshold)
  {
    //Attack/FORWARD (FULL SPEED)
    motor(1,max_speed);  //Right motor (FORWARD)
    motor(2,max_speed);  //Left motor (FORWARD)
    delay(10);
  }
  //If RIGHT Distance Sensor Detects Oponent(Spin Right)
  else if(analog(RIGHT_IR) > distance_sensor_threshold)
  {
    //Spin Right
    motor(1,-90);  //Right motor (BACKWARD)
    motor(2,90);  //Left motor (FORWARD)
    delay(25);
  }
  //If LEFT Distance Sensor Detects Oponent(Spin Left)
  else if(analog(LEFT_IR) > distance_sensor_threshold)
  {
    //Spin Left
    motor(1,max_speed);  //Right motor (FORWARD)
    motor(2,-90);  //Left motor (BACKWARD)
    delay(25);
  }
  //IF There is No Detection (Slow Speed Forward)
  else
  {
    //FORWARD (SLOW SPEED)
    motor(1,default_speed);  //Right motor (FORWARD)
    motor(2,default_speed);  //Left motor (FORWARD)
  }
}