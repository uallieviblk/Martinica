/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(USER_LED, OUTPUT);
  digitalWrite(USER_LED, HIGH);
  pinMode(LED_R, OUTPUT);
  digitalWrite(LED_R, HIGH);
  pinMode(LED_G, OUTPUT);
  digitalWrite(LED_G, HIGH);
  pinMode(LED_B, OUTPUT);
  digitalWrite(LED_B, HIGH);
}

// the loop function runs over and over again forever
void loop() {
  static int i = 0;
  i++;
  if( i & 0x100)
     analogWrite(LED_R, 255 - (i & 0xff));
  if( i & 0x200)
     analogWrite(LED_R, (i & 0xff));
  if( i & 0x400)
     analogWrite(LED_G, 255 - (i & 0xff));
  if( i & 0x800)
     analogWrite(LED_G, (i & 0xff));
  if( i & 0x1000)
     analogWrite(LED_B, 255 - (i & 0xff));
  if( i & 0x2000)
     analogWrite(LED_B, (i & 0xff));

  delay(10); 
}
