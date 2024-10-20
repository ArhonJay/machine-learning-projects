void line_trace()
{
  int ch1 = map(analog(RIGHT_LINE, IR_LOWER_BOUNDARY, IR_UPPER_BOUNDARY, 0, speed));
  int ch2 = map(analog(LEFT_LINE, IR_LOWER_BOUNDARY, IR_UPPER_BOUNDARY, 0, speed));

  if (analog(RIGHT_LINE <= IR_LOWER_BOUNDARY) && analog(LEFT_LINE <= IR_LOWER_BOUNDARY)) {
    motor(1, speed);
    motor(2, speed);
  }

  motor(1, ch1);
  motor(2, ch2);
}