/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
 
const float offsetX = 1.65;
const float offsetY = 1.65;
const float offsetZ = 1.65; 

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  // read the input on analog pin 0:
  int sVX = analogRead(A0);
  int sVY = analogRead(A1);
  int sVZ = analogRead(A2); 
  
  
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float fVX = sVX * (5.0 / 1023.0);
  float fVY = sVY * (5.0 / 1023.0);
  float fVZ = sVZ * (5.0 / 1023.0);
  
  // print out the value you read:
  
  Serial.print("X = ");
  Serial.print(fVX-offsetX);
  Serial.print("Y = " );
  Serial.print(fVY-offsetY); 
  Serial.print("Z = " );
  Serial.print(fVZ-offsetZ);
  
  Serial.println(); 
  
    
  
  
}