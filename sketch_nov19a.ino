
int clearPin = 5;
int serialData = 6; 
int shiftClock = 7;
int latchClock = 8;
const int buttonPin = 3;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(clearPin, OUTPUT);
  pinMode(shiftClock, OUTPUT);
  pinMode(latchClock, OUTPUT);
  pinMode(serialData, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(clearPin, LOW);
  digitalWrite(clearPin, HIGH);
}

/*void reshuffleArray() {
  for (int i=0;i<numOptions;i++) {    
  int n= random(0,numOptions);
  int temp = randomizedOrder[n];
  randomizedOrder[n]=randomizedOrder[i];
  randomizedOrder[i]= temp;
  }*/
  
void loop() {
  // put your main code here, to run repeatedly:
    buttonState = digitalRead(buttonPin);

    if (buttonState != 0) {
      digitalWrite(latchClock, LOW);
      shiftOut(serialData, shiftClock, MSBFIRST);
      digitalWrite(latchClock,HIGH);
      delay(250);
    }

  /*int x = random(8); // 0.7
  int val = 1 << x;   // shift one single 1 bit to the right giving one of { 1,2,4,8,16,32,64,128 }
  shiftOut(val);
  //reshuffleArray();
  /*for (int j=0; j<9;j++) {
    if (buttonState == LOW and location_options[randomizedOrder[j]]==1) { //if button is pressed
    
    }
  
  }*/

  /*for (int shiftCount = 0; shiftCount < 256; shiftCount++) {
    digitalWrite(latchClock, LOW);

    shiftOut(serialData, shiftClock, MSBFIRST, shiftCount);
    digitalWrite(latchClock,HIGH);
    delay(250);
  }*/

  
  }
