/* 
MX1508 DC MOTOR DRIFT
Sidst ændret 22. marts 2023
Af Jonas Rothausen
*/

void setup() {
  pinMode(8, OUTPUT); //IN2
  pinMode(9, OUTPUT); //IN1
}
void loop() {

// Fuld fart fremad
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);


  delay(3000);

// Fuld fart baglæns
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

  delay(3000);

// 0 to 100% fremad
  for (int i=0;i<256;i++)
  {   digitalWrite(8, HIGH);
      analogWrite(9, i);
      delay(20);      
      }

  delay(50);

  // 0 to 100% baglæns
        for (int i=255;i<0;i--)
  {   digitalWrite(8, LOW);
      analogWrite(9, i);
      delay(20);      
      }

        delay(50);
}




