Durante el semestre se counstrirán 2 interfaces. 
La primera con software.
La segunda con hardware
La tercera es una interfaz mecánica.

´´´ino
String name = "Adora";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
  Serial.println(name);
  delay(2000); // this speeds up the simulation
}
´´´

´´´ino
int led=4;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led,1);
  delay(1000); // this speeds up the simulation
  digitalWrite(led,0);
  delay(1000); // this speeds up the simulation
}
´´´

´´´ino
int led=4;
int btn=14;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  int edoBtn=digitalRead(btn);
  digitalWrite(led, edoBtn);
  delay(500);
}
´´´

