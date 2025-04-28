
int Ping() {

  currentMillis = millis();
  
 if ((currentMillis - previousMillis >= interval) && (pingOn == true)) 
 {
  
  digitalWrite(trigPin, LOW);   
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);   
  float Fdistance = pulseIn(echoPin, HIGH);  
  Fdistance = Fdistance / 58;       
  return (int)Fdistance;

  
  }       // end if statement
 
}         // end Ping()

 
