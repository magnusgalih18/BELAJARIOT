void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
}

void loop() {
  digitalWrite(A0, HIGH); 
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(A5, HIGH);  
  delay(1000);                      
  digitalWrite(A0, LOW);    
  digitalWrite(A1, LOW);   
  digitalWrite(A2, LOW);   
  digitalWrite(A3, LOW);   
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW); 
  delay(1000);
}
