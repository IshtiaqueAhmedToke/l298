const int in1 = 4;
const int in2 = 5;
const int enA = 9;
const int in3 = 6; //need to change 4 and 5 I think
const int in4 = 7;
const int enB = 10;

byte serialA;



void setup() {

 Serial.begin(9600);

    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(enA, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(enB, OUTPUT);

}

void loop() {

if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}

   switch (serialA) {
    // forward
   case 'F':
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        analogWrite(enA, 255);
        analogWrite(enB, 255);
        break;

         // left
    case 'L':
         digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
        analogWrite(enA, 255);
        analogWrite(enB, 0);
        break;


    // right
    case 'R':
        
        
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
        analogWrite(enA, 0);
        analogWrite(enB, 255);
        break;
  
   
    // backward
    case 'B':
         digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
        analogWrite(enA, 255);
        analogWrite(enB, 255);
        break;
        


     // Stop
     case 'S':
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, LOW);
        analogWrite(enA, 0);
        analogWrite(enB, 0); }
    }
