// library initialization
#include <Wire.h> // calls a library called Wire

// variable initialization
#define raindropSensorPin 2 // defining raindrop sensor uses pin: D2
#define slaveAddress 1 // defining I2C address to connect with Master
#define dataretrievalSize 23 // defining size on data retrieval
#define dataTransmissionSize 27 // defining size on data transmission
String response; // string variable used to send data to Arduino Mega
String getData; // string variable used to get data from Arduino Mega

// Method: setup
void setup() {
  Wire.begin(slaveAddress); // I2C communications to Master
  Wire.onRequest(dataTransmission); // function to run when data requested from Master
  Serial.begin(9600); // baudrate serial monitor
}

// Method: loop
void loop() {
  sensor(); // sensor logic
  dataRetrieval(); // retrieve character data from Master
  delay(1000); // time delay in loop
}

// Method: sensor
void sensor(){
  int sensorState = digitalRead(raindropSensorPin); // read the sensor on digital: D2
  if(sensorState == LOW){ // sensor detected wet then
    response = "Rain Warning"; // print to serial monitor
  }
  if(sensorState == HIGH){ // sensor detected dry then
    response = "Not Raining"; // print to serial monitor
  }
}

// Method: dataRetrieval
void dataRetrieval(){
  Wire.requestFrom(slaveAddress,dataretrievalSize); // read response from Master
  getData = ""; while(Wire.available()){ getData += char(Wire.read()); } // add characters to string
  Serial.print("Data retrieval\t\t: "); Serial.println(getData); // print to serial monitor
}

// Method: dataTransmission
void dataTransmission(){
  byte data[dataTransmissionSize]; // setup byte variable in the correct size
  for(byte i=0;i<dataTransmissionSize;i++) { data[i] = (byte)response.charAt(i); } // format data as array
  Wire.write(data,sizeof(data)); // send response to Master
  Serial.print("Data transmission\t: "); Serial.println(response); // print to serial monitor
}
