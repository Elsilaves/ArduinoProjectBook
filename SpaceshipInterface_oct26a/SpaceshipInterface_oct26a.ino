int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //Green light
  pinMode(4, OUTPUT); //Red light
  pinMode(5, OUTPUT); //Red light
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW) {
    digitalWrite(3, HIGH); //Green light on
    digitalWrite(4, LOW); //Red light off
    digitalWrite(5, LOW); //Red light off
  }
  else {
    digitalWrite(3, LOW); //Turn off green light
    for(int i=0; i < 10 ; i++ ){
      // Wait for 250 milliseconds
    delay(250); 
    digitalWrite(4, HIGH); //Red light on
    digitalWrite(5, LOW); //Red light off
    // Wait for 250 milliseconds
    delay(250);
    digitalWrite(4, LOW); //Red light on
    digitalWrite(5, HIGH); //Red light off
    }
  }
}
