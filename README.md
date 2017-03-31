# ArduinoTextToMorseLED
DO NOT USE 1.2 NOT COMPLETE, WILL ERROR OUT IN COMPILER!<br>
A Simple "Text" to Mose LED Program for Arduino.
To have program work proper go to void loop (very bottom)
and everything in the while remove: <br>
void loop() {<br>
 while (true) {<br>
   V();       REMOVE THESE LINES<br>
   E();       REMOVE THESE LINES<br>
   five();    REMOVE THESE LINES<br>
   L();       REMOVE THESE LINES<br>
   P();       REMOVE THESE LINES<br>
   L();       REMOVE THESE LINES<br>
 }<br>
}<br>
<br>
then inside while (true) { & } put X(Letter you want) then ();<br>
       No Numbers or Lower Cases!<br>
so if i want to spell Keaton  I would do so:<br>
<br>
void loop() {<br>
  while (true) {<br>
    K();<br>
    E();<br>
    A();<br>
    T();<br>
    O();<br>
    N();<br>
  }<br>
}<br>
