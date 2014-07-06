int duration; //the variable duration for the last time of the pulse
int distance; //the variable distance for the distance between the sensor and the nearest obstacle in front of it
int srfPin = 10; //the input port is connected to the pin 10 of arduino chip
int led=2;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);   //turn the red LED on
}
void loop()
{
  pinMode(srfPin, OUTPUT);       //the operation on the URF
  digitalWrite(srfPin, LOW);
  delayMicroseconds(2);
  digitalWrite(srfPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(srfPin, LOW);
  pinMode(srfPin, INPUT);
  duration = pulseIn(srfPin, HIGH);
  distance = duration/58;        //calculate the distance with the unit centermeter (cm)
  Serial.println(distance);      //transmit the distance through the serial port 
  delay(50);                     //pause a little bit to keep the communication stable
}
