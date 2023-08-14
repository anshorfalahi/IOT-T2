/*=========KONEKSI NODEMCU VS TOMBOL, LED, & BUZZER 
 *  TOMBOL  |  NODE MCU
 *    SW1   -->    D5
 *    SW2   -->    D6
 *    SW3   -->    D7
 *    SW4   -->    D8
 *    
 *    LED   |  NODE MCU
 *    L1   -->    D0
 *    L2   -->    D1
 *    L3   -->    D2
 *    L4   -->    D3
 *
 *    CN15  --> D4
 ================================*/
#define Buzzer D4 
#define tombol1 D5
#define tombol2 D6
#define tombol3 D7
#define tombol4 D8
#define LED1 D0
#define LED2 D1
#define LED3 D2
#define LED4 D3 
//===================================
void setup() {
  Serial.begin(115200);
  delay(10); 
  pinMode(tombol1, INPUT); 
  pinMode(tombol2, INPUT); 
  pinMode(tombol3, INPUT); 
  pinMode(tombol4, INPUT); 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(Buzzer, OUTPUT); 

 
  digitalWrite(tombol1, HIGH);
  digitalWrite(tombol2, HIGH);
  digitalWrite(tombol3, HIGH);
  digitalWrite(tombol4, HIGH);
  Serial.println("Tes Tombol...");  
}

//=====================================================
void loop() { 
  if (digitalRead(tombol1)){Serial.println("Tombol1 ON"); digitalWrite(LED1, HIGH); digitalWrite(Buzzer,1); delay(300);}
  if (digitalRead(tombol2)){Serial.println("Tombol2 ON"); digitalWrite(LED2, HIGH); digitalWrite(Buzzer,1); delay(300);}
  if (digitalRead(tombol3)){Serial.println("Tombol3 ON"); digitalWrite(LED3, HIGH); digitalWrite(Buzzer,1); delay(300);}
  if (digitalRead(tombol4)){Serial.println("Tombol4 ON"); digitalWrite(LED4, HIGH); digitalWrite(Buzzer,1); delay(300);}
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(Buzzer, 0);

}