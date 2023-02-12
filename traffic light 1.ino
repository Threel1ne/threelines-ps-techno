#define red 2
#define yellow 3
#define green 4
//เปลี่ยนเลขที่อยู่หลังสุดเป็นช่องที่ใส่ไฟแต่ละสี ไล่มาจาก แดง เหลือง และเขียว

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, LOW)
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);
  digitalWrite(yellow,LOW);
  digitaLWrite(green,HIGH);
}
