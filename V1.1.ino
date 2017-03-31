

void dit() {
 digitalWrite(led, HIGH); 
delay(250);             
digitalWrite(led, LOW);   
delay(250);
}

void daw() {
digitalWrite(led, HIGH);  
delay(750);              
digitalWrite(led, LOW);    
delay(250);
}

void A(){
  dit();
  daw();
  delay(1750);
}

void B(){
  daw();
  dit();
  dit();
  dit();
  delay(1750);
}

void C(){
  daw();
  dit();
  daw();
  dit();
  delay(1750);
}

void D(){
 daw();
 dit();
 dit();
 delay(1750);
}

void E(){
  dit();
  delay(1750);
}

void F(){
  dit();
  dit();
  daw();
  dit();
  delay(1750);
}

void G(){
  daw();
  daw();
  dit();
  delay(1750);
}

void H(){
  dit();
  dit();
  dit();
  dit()
  delay(1750);
}

void I(){
  dit();
  dit();
  delay(1750);
}

void J(){
  dit();
  daw();
  daw();
  daw();
  delay(1750);
}

void K(){
  daw();
  dit();
  daw();
  delay(1750);
}
void L(){
   dit();
   daw();
   dit();
   dit();
   delay(1750);
}

void P(){
 dit();
 daw();
 daw();
 dit();
}

void V(){
 dit();
 dit();
 dit();
 daw(); 
 delay(1750);
}

void five(){
 dit();
 dit();
 dit();
 dit();
 dit();
 delay(1750);
}

void loop() {
 while (true) {
   V(); 
   E(); 
   five();
   L(); 
   P(); 
   L();
 }
}
