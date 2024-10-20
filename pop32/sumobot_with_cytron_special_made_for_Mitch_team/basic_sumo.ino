void Basic_Sumo()
{
  int irL = analog(left_ir);
  int irR = analog(right_ir);

  int dist_L = in(distance_L);
  int dist_R = in(distance_R);

  if ((irL < black_infrared_threshold) && (irR < black_infrared_threshold))
  {
    motor1.setSpeed(default_speed);
    motor2.setSpeed(default_speed);
  }

  if ((irL > white_infrared_threshold) && (irR < black_infrared_threshold))
  {
    motor1.setSpeed(-200);
    motor2.setSpeed(-200);
    delay(250);
    motor1.setSpeed(medium_speed);
    motor2.setSpeed(-200);
    delay(250);
  }

  if ((irL < black_infrared_threshold) && (irR > white_infrared_threshold))
  {
    motor1.setSpeed(-200);
    motor2.setSpeed(-200);
    delay(250);
    motor1.setSpeed(-200);
    motor2.setSpeed(medium_speed);
    delay(250);
  }

  if ((irL > white_infrared_threshold) && (irR > white_infrared_threshold))
  {
    motor1.setSpeed(-200);
    motor2.setSpeed(-200);
    delay(250);
    motor1.setSpeed(medium_speed);
    motor2.setSpeed(-200);
    delay(250);
  }

  if ((dist_L == distance_sensor_threshold) && (dist_R == distance_sensor_threshold))
  {
    motor1.setSpeed(max_speed);
    motor2.setSpeed(max_speed);
  }
  else if ((dist_L == distance_sensor_threshold) && (dist_R != distance_sensor_threshold))
  {
    motor1.setSpeed(max_speed);
    motor2.setSpeed(-255);
  }
  else if ((dist_L != distance_sensor_threshold) && (dist_R == distance_sensor_threshold))
  {
    motor1.setSpeed(-255);
    motor2.setSpeed(max_speed);
  }
  else 
  {
    motor1.setSpeed(default_speed);
    motor2.setSpeed(default_speed);
  }
}