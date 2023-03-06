#if 1
void setup(){
Serial.begin(9600);

// using for loops (initialization; condition; increment/decrement)

for(int pinNumber = 2; pinNumber <=5; pinNumber++){
Serial.println(pinNumber);
pinMode(pinNumber, OUTPUT);

}

}

void loop(){
  for(int pinNumber = 2; pinNumber <=5; pinNumber++){
    Serial.println( "LED" + String(pinNumber) + "ON");
    digitalWrite(pinNumber, HIGH);
    delay(1000);
    }

for(int pinNumber = 5; pinNumber >=2; pinNumber--){
    Serial.println( "LED" + String(pinNumber) + "OFF");
    digitalWrite(pinNumber, LOW);
    delay(1000);
    }    
}

#endif