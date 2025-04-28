
void sweep() {  
  bluetooth();                      // Can be used to simulate Metal Detecting or to rotate Ping Sensor

  myservo.write(60);  //setservo position to right side
    delay(200); 
    rightDistance = Ping();

    myservo.write(120);  //set servo position to left side
    delay(200); 
    leftDistance = Ping();


    if((rightDistance > 70)&&(leftDistance > 70)){
      StopCar();
    }else if((rightDistance >= 20) && (leftDistance >= 20)) {     
      Forward();
    }else if((rightDistance <= 10) && (leftDistance <= 10)) {
        Reverse();
        delay(100);
    }else if(rightDistance - 3 > leftDistance) {
        RightTurn();
        delay(100);
    }else if(rightDistance + 3 < leftDistance) {
        LeftTurn();
        delay(100);
    }else{
      StopCar();
    }
    
}

void follow(){
  while (blueToothVal == 15){
    sweep(); 
  }
}