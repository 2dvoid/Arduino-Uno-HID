//Code based on example found here: http://mitchtech.net/arduino-usb-hid-keyboard/

#define KEY_LEFT_CTRL 1
#define KEY_LEFT_SHIFT 2
#define KEY_F10 67

uint8_t buf[8] = {
  0
}; //Keyboard buffer bit rate

#define PIN_ERASER 2
#define PIN_LASER 4
#define PIN_HIGHLIGHTER 7
#define PIN_PEN 8
#define PIN_ARROW 12

#define PIN_PURPLE 3
#define PIN_YELLOW 5
#define PIN_GREEN 6
#define PIN_BLUE 9
#define PIN_RED 10
#define PIN_BLACK 11

int state = 1;

void setup()
{
  Serial.begin(9600);

  pinMode(PIN_ERASER, INPUT);
  pinMode(PIN_LASER, INPUT);
  pinMode(PIN_HIGHLIGHTER, INPUT);
  pinMode(PIN_PEN, INPUT);
  pinMode(PIN_ARROW, INPUT);
  pinMode(PIN_PURPLE, INPUT);
  pinMode(PIN_YELLOW, INPUT);
  pinMode(PIN_GREEN, INPUT);
  pinMode(PIN_BLUE, INPUT);
  pinMode(PIN_RED, INPUT);
  pinMode(PIN_BLACK, INPUT);
  //internal pull-ups
  digitalWrite(PIN_ERASER, 1);
  digitalWrite(PIN_LASER, 1);
  digitalWrite(PIN_HIGHLIGHTER, 1);
  digitalWrite(PIN_PEN, 1);
  digitalWrite(PIN_ARROW, 1);
  digitalWrite(PIN_PURPLE, 1);
  digitalWrite(PIN_YELLOW, 1);
  digitalWrite(PIN_GREEN, 1);
  digitalWrite(PIN_BLUE, 1);
  digitalWrite(PIN_RED, 1);
  digitalWrite(PIN_BLACK, 1);
  
  delay(200);
}

void loop()
{
   state = digitalRead(PIN_ARROW);
  if (state != 1) {
    buf[0] = KEY_LEFT_CTRL;   // Ctrl
    buf[2] = 4;    // Letter A
    // buf[2] = 123;    // Cut key: Less portable
    Serial.write(buf, 8); // Send keypress
    releaseKey();
}
  state = digitalRead(PIN_PEN);
  if (state != 1) {
    buf[0] = KEY_LEFT_CTRL;   // Ctrl
    buf[2] = 19;    // Letter P
    // buf[2] = 124;    // Copy key: Less portable
    Serial.write(buf, 8); // Send keypress
    releaseKey();
  } 

  state = digitalRead(PIN_HIGHLIGHTER);
  if (state != 1) {
    buf[0] = KEY_LEFT_CTRL;   // Ctrl
    buf[2] = 12;    // Letter I
    // buf[2] = 125;    // Paste key: Less portable
    Serial.write(buf, 8); // Send keypress
    releaseKey();
  } 

    state = digitalRead(PIN_LASER);
  if (state != 1) {
    buf[0] = KEY_LEFT_CTRL;   // Ctrl
    buf[2] = 15;    // Letter L
    // buf[2] = 125;    // Paste key: Less portable
    Serial.write(buf, 8); // Send keypress
    releaseKey();
  }

    state = digitalRead(PIN_ERASER);
  if (state != 1) {
    buf[0] = KEY_LEFT_CTRL;   // Ctrl
    buf[2] = 8;    // Letter E
    // buf[2] = 125;    // Paste key: Less portable
    Serial.write(buf, 8); // Send keypress
    releaseKey();
  }
  
state = digitalRead(PIN_BLACK);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
  state = digitalRead(PIN_RED);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow 1
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 2
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 3
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
    state = digitalRead(PIN_BLUE);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow 1
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 2
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 3
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 4
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 5
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 6
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 7
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 8
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 9
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
    state = digitalRead(PIN_GREEN);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow 1
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 2
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 3
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 4
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 5
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 6
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 7
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
    state = digitalRead(PIN_YELLOW);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow 1
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 2
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 3
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 4
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 5
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
    state = digitalRead(PIN_PURPLE);
  if (state != 1) {
    {
    buf[0] = KEY_LEFT_SHIFT; 
    buf[2] = KEY_F10; // menu
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 18; // o
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 6; // c
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 79; // arrow 1
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 2
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 3
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 4
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 5
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 6
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 7
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 8
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 9
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 10
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
   {
    buf[2] = 79; // arrow 11
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  {
    buf[2] = 40; //enter
    Serial.write(buf, 8); // Send keypress
    releaseColor();
  }
  }
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Release key  
  delay(200);
}

void releaseColor() //seperate releases b/c need a faster response rate to reduce sensation of lag when going thru color menu
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); //release
  delay(50);
}
