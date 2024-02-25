// library initialization
#include <Wire.h> // calls a library called Wire

// variable initialization
#define ledPin 13 // defining raindrop sensor uses pin: D13
#define slaveAddress 1 // defining I2C address to connect with Slave
#define dataretrievalSize 27 // defining size on data retrieval
#define dataTransmissionSize 23 // defining size on data transmission
String data; // string variable used to retrieve data from the Arduino Nano
String getData; // string variable used to get data from the Arduino Nano

// Method: setup
void setup() {
  Wire.begin(slaveAddress); // I2C communications to Slave
  Wire.onRequest(dataTransmission); // function to run when data requested from Slave
  pinMode(ledPin, OUTPUT); // sets the digital pin 13 as output
  digitalWrite(ledPin, LOW); // sets the digital pin 13 off
  Serial.begin(9600); // baudrate serial monitor
}

// Method: loop
void loop() {  
  rainIndicator(); // rain indicator logic
  dataRetrieval(); // retrieve character data from Slave
  delay(1000); // time delay in loop
}

// Method: dataRetrieval
void dataRetrieval(){
  Wire.requestFrom(slaveAddress,dataretrievalSize); // read response from Slave
  getData = ""; while(Wire.available()){ getData += char(Wire.read()); } // add characters to string
  Serial.print("Data retrieval\t\t: "); Serial.println(getData); // print to serial monitor
}

// Method: dataTransmission
void dataTransmission(){
  byte sendData[dataTransmissionSize]; // setup byte variable in the correct size
  for(byte i=0;i<dataTransmissionSize;i++) { sendData[i] = (byte)data.charAt(i); } // format data as array
  Wire.write(sendData,sizeof(sendData)); // send response to Slave
  Serial.print("Data transmission\t: "); Serial.println(data); // print to serial monitor
}

// Method: rain indicator
void rainIndicator(){
  if(getData == "Not Raining"){
    digitalWrite(ledPin, LOW); // sets the digital pin 13 off
    data = "LED OFF (Safe)"; // response in the serial monitor
  }
  if(getData == "Rain Warning"){
    digitalWrite(ledPin, HIGH); // sets the digital pin 13 on
    data = "LED ON (Danger)"; // response in the serial monitor
  }
}
