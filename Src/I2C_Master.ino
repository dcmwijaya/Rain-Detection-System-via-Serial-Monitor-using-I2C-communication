// library initialization
#include <Wire.h> // calls a library called Wire

// variable initialization
#define ledPin 13 // defining led uses pin: D13
#define slaveAddress 1 // defining I2C address to connect with Slave
#define dataretrievalSize 27 // defining size on data retrieval
#define dataTransmissionSize 23 // defining size on data transmission
String sendData; // string variable used to send data to Arduino Nano
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
  byte data[dataTransmissionSize]; // setup byte variable in the correct size
  for(byte i=0;i<dataTransmissionSize;i++) { data[i] = (byte)sendData.charAt(i); } // format sendData as array
  Wire.write(data,sizeof(data)); // send data to Slave
  Serial.print("Data transmission\t: "); Serial.println(sendData); // print to serial monitor
}

// Method: rain indicator
void rainIndicator(){
  if(getData == "Not Raining"){
    digitalWrite(ledPin, LOW); // sets the digital pin 13 off
    sendData = "LED OFF (Safe)"; // print to serial monitor
  }
  if(getData == "Rain Warning"){
    digitalWrite(ledPin, HIGH); // sets the digital pin 13 on
    sendData = "LED ON (Danger)"; // print to serial monitor
  }
}
