                     // ***********************Created by Afzal********************** //
                      // ************************RoboSoccer Code********************* //
int lm1 = 9;    // in1
int lm2 = 8;     //in2
int rm1 = 11;    //in3
int rm2 = 10;   //in4

char data; 
void setup() {
  Serial.begin(9600);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
    if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == 'F')      
      {        // Checks whether value of data is equal to 1
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      Serial.println("Forward");   
      }                               //If value is 1 then LED turns ON
      else if(data == 'R') {        //  Checks whether value of data is equal to 0
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,LOW);
      delay(100);
      Serial.println("Right"); 
      }
       else if(data == 'L') {        //  Checks whether value of data is equal to 0
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      delay(100);
      Serial.println("Left"); 
       }
       else if(data == 'S') {        //  Checks whether value of data is equal to 0
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,LOW);
       Serial.println("Stop"); 
       }
       else if(data == 'B') {        //  Checks whether value of data is equal to 0
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,HIGH);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,HIGH);
      Serial.println("Backward"); 
       } //If value is 0 then LED turns OFF
   }
}
