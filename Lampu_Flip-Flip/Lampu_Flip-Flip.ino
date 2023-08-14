#define Buzzer D4 

void  setup()  {
pinMode(D0,  OUTPUT);  //LED1
pinMode(D1,  OUTPUT);  //LED2
pinMode(D2,  OUTPUT);  //LED3
pinMode(D3,  OUTPUT);  //LED4
pinMode(Buzzer, OUTPUT); 

}

void  loop()  {
digitalWrite(D0,  HIGH);
digitalWrite(D1,  LOW);
digitalWrite(D2,  LOW);
digitalWrite(D3,  LOW);
digitalWrite(Buzzer,1);
delay(1000);
digitalWrite(Buzzer,0);   
delay(1000);

digitalWrite(D0,  LOW);
digitalWrite(D1,  HIGH);
digitalWrite(D2,  LOW);
digitalWrite(D3,  LOW);
digitalWrite(Buzzer,1);
delay(1000);
digitalWrite(Buzzer,0);   
delay(1000);

digitalWrite(D0,  LOW);
digitalWrite(D1,  LOW);
digitalWrite(D2,  HIGH);
digitalWrite(D3,  LOW);
digitalWrite(Buzzer,1);
delay(1000);
digitalWrite(Buzzer,0);   
delay(1000);

digitalWrite(D0,  LOW);
digitalWrite(D1,  LOW);
digitalWrite(D2,  LOW);
digitalWrite(D3,  HIGH);
digitalWrite(Buzzer,1);
delay(1000);
digitalWrite(Buzzer,0);   
delay(1000);

digitalWrite(D0,  HIGH);
digitalWrite(D1,  HIGH);
digitalWrite(D2,  HIGH);
digitalWrite(D3,  HIGH);
digitalWrite(Buzzer,1);
delay(3000);
digitalWrite(Buzzer,0);   
delay(1000);
}