int redLED = 11;
int greenLED = 10;
int blueLED = 9;

void setup(){
  
  pinMode (redLED,OUTPUT);
  pinMode (greenLED,OUTPUT);
  pinMode (blueLED,OUTPUT);
}

void loop(){
  analogWrite(redLED,255);
  delay(1000);
  analogWrite(redLED, 102);
  delay(1000);
  analogWrite(redLED, 0);   
  delay(1000);
  


  analogWrite(greenLED, 255);
  delay(1000);
  analogWrite(greenLED, 102);
  delay(1000);
  analogWrite(greenLED,0);
  delay(1000);
 
  

  analogWrite(blueLED,255);
  delay(1000);
  analogWrite(blueLED,102);
  delay(1000);
  analogWrite(blueLED,0);
  delay(1000);
  

}
