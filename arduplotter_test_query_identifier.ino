/*
Test sketch for Arduplotter, v. 0.2.
Identification method: query string and identifier
Query string: ?
Identification: TEST
Upload this sketch on an Arduino device to test Arduplotter.
This sketch is in the public domain.
*/

char serial_input;
int previous_fake_measurement = 0;

void setup(){

 Serial.begin(115200); // Begin serial communication.

}

void loop(){

  serial_input = '-';

  wait_for_input:
  if (Serial.available() > 0 ){

    serial_input = Serial.read();

    if (serial_input == '?' && previous_fake_measurement == 0){
      Serial.println("TEST13.00");
    previous_fake_measurement++;
    goto wait_for_input;
    }

    if (serial_input == '?' && previous_fake_measurement == 1){
      Serial.println("TEST12.75");
    previous_fake_measurement++;
    goto wait_for_input;
    }

    if (serial_input == '?' && previous_fake_measurement == 2){
      Serial.println("TEST12.00");
    previous_fake_measurement = 0;
    goto wait_for_input;
    }

  }

}
// EOF
