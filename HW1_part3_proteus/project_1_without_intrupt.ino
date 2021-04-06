
int buttonPin = 2;
int ledPin = 3;
int st =0;

void setup() {

pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
if (digitalRead(buttonPin)) {
  if(st ==0){
    digitalWrite(ledPin, HIGH);
    st=1;
    }else{
      digitalWrite(ledPin, LOW);
    st=0;
      }
      while(digitalRead(buttonPin));
}
}
