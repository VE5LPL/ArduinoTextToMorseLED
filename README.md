# ArduinoTextToMorseLED
A Simple "Text" to Mose LED Program for Arduino.
To have program work proper go to void loop (very bottom)
and everything in the while remove:
void loop() {
 while (true) {
   V();       REMOVE THESE LINES
   E();       REMOVE THESE LINES
   five();    REMOVE THESE LINES
   L();       REMOVE THESE LINES
   P();       REMOVE THESE LINES
   L();       REMOVE THESE LINES
 }
}

then inside while (true) { & } put X(Letter you want) then ();
# No Numbers of Lower Cases!
so if i want to spell Keaton  I would do so:

void loop() {
  while (true) {
    K();
    E();
    A();
    T();
    O();
    N();
  }
}
