/*
Test sketch for Arduplotter, v. 0.2.
Identification method: identifier only
Identification: TEST
Upload this sketch on an Arduino device to test Arduplotter.
This sketch is in the public domain.
*/

void setup(){

 Serial.begin(115200); // Begin serial communication.

}

void loop(){

 Serial.println("TEST13.00");
 delay (950);

 Serial.println("TEST12.75");
 delay (950);

 Serial.println("TEST12.50");
 delay (950);

}
// EOF
