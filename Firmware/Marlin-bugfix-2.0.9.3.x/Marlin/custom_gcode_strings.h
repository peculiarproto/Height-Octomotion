//10X18 Is the production setup

//Temp 5x5
const char btn1Gcode[] = 
R"(M118 Button 1 Pressed 2.gco
M21
M23 AA~1.gco
M24
)";

const char btn2Gcode[] = 
R"(M117 Button 2 Pressed 2.gco
M21
M23 BB~1.gco
M24
)";

const char btn3Gcode[] = 
R"(M117 Button 3 Pressed 3.gco
M21
M23 CCC~1.gco
M24
)";

const char btn4Gcode[] = 
R"(M117 Button 4 Pressed 4.gco
M21
M23 DDD~1.gco
M24
)";