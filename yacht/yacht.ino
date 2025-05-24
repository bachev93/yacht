#define pinX A2    // ось X джойстика
#define pinY A1    // ось Y джойстика
#define swPin 2    // кнопка джойстика
#define ledPin 13  // светодиод на Pin 13

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);

  pinMode(swPin, INPUT);
  digitalWrite(swPin, HIGH);
}

void loop() {
  boolean ledState = digitalRead(swPin);  // считываем состояние кнопки
  digitalWrite(ledPin, ledState);         // вкл./выкл. светодиод

  int X = analogRead(pinX);  // считываем значение оси Х
  int Y = analogRead(pinY);  // считываем значение оси Y

  Serial.print(X);     // выводим в Serial Monitor
  Serial.print("\t");  // табуляция
  Serial.println(Y);
}
