/*
   Print Switch - external pull-up

   Circuit: switch with pull-up resistor on 2
*/

int switchPin = 2; // variable for switch pin

void setup() {

  // start the Serial communication
  Serial.begin(9600);

}

void loop() {
  // create a variable
  int switchValue;

  // read in the value of the sensor and save
  //in the variable
  sensorValue = digitalRead(2);

  // print message to Serial Monitor
  Serial.println(switchValue);

}
