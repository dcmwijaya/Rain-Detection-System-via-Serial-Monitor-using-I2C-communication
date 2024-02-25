// library initialization
#include <Wire.h> // calls a library called Wire

// variable initialization
#define slaveAddress 1 // defining I2C address to connect with Master
#define dataretrievalSize 23 // defining size on data retrieval
#define dataTransmissionSize 27 // defining size on data transmission
String data = "Hello Master (Arduino Mega)"; // create data to transmit to Master

// Method: setup
void setup() {
  Wire.begin(slaveAddress); // I2C communications to Master
  Wire.onRequest(dataTransmission); // function to run when data requested from Master
  Serial.begin(9600); // baudrate serial monitor
}

// Method: loop
void loop() {
  dataRetrieval(); // retrieve character data from Master
  delay(1000); // time delay in loop
}

// Method: dataRetrieval
void dataRetrieval(){
  Wire.requestFrom(slaveAddress,dataretrievalSize); // read response from Master
  String response = ""; while(Wire.available()){ response += char(Wire.read()); } // add characters to string
  Serial.print("Data retrieval\t\t: "); Serial.println(response); // print to serial monitor
}

// Method: dataTransmission
void dataTransmission(){
  byte response[dataTransmissionSize]; // setup byte variable in the correct size
  for(byte i=0;i<dataTransmissionSize;i++) { response[i] = (byte)data.charAt(i); } // format data as array
  Wire.write(response,sizeof(response)); // send response to Master
  Serial.print("Data transmission\t: "); Serial.println(data); // print to serial monitor
}
