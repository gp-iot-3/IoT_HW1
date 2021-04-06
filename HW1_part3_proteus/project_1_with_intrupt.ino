    int ledPin = 3;
    unsigned long button_time = 2;  
    unsigned long last_button_time = 0; 
    
    void setup() {                
      pinMode(ledPin, OUTPUT);
      attachInterrupt(0, increment, RISING);
      digitalWrite(ledPin, LOW);
    }
    
    void loop() {
      
    }
    
    void increment() {
      button_time = millis();
      if (button_time - last_button_time > 250)
      {
        if(digitalRead(ledPin)){
            digitalWrite(ledPin, LOW);
          }else{
             digitalWrite(ledPin, HIGH);
            }
        last_button_time = button_time;
      }
    }
