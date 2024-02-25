// library initialization
#include <Wire.h> // calls a library called Wire

// variable initialization
#define slaveAddress 1 // defining I2C address to connect with Slave
#define dataretrievalSize 27 // defining size on data retrieval
#define dataTransmissionSize 23 // defining size on data transmission
String data = "Hi Slave (Arduino Nano)"; // create data to transmit to Slave

// Method: setup
void setup() {
  Wire.begin(slaveAddress); // I2C communications to Slave
  Wire.onRequest(dataTransmission); // function to run when data requested from Slave
  Serial.begin(9600); // baudrate serial monitor
}

// Method: loop
void loop() {
  dataRetrieval(); // retrieve character data from Slave
  delay(1000); // time delay in loop
}

// Method: dataRetrieval
void dataRetrieval(){
  Wire.requestFrom(slaveAddress,dataretrievalSize); // read response from Slave
  String response = ""; while(Wire.available()){ response += char(Wire.read()); } // add characters to string
  Serial.print("Data retrieval\t\t: "); Serial.println(response); // print to serial monitor
}

// Method: dataTransmission
void dataTransmission(){
  byte response[dataTransmissionSize]; // setup byte variable in the correct size
  for(byte i=0;i<dataTransmissionSize;i++) { response[i] = (byte)data.charAt(i); } // format data as array
  Wire.write(response,sizeof(response)); // send response to Slave
  Serial.print("Data transmission\t: "); Serial.println(data); // print to serial monitor
}
