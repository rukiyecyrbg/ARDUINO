int butondurum;
const int led1=8
const int led2=9
const int led3=10
const int buton1=5
const int buton2=6
const int buton3=7
void setup() {
pinMode(buton1,INPUT_PULLUP);
pinMode(buton2,INPUT_PULLUP);
pinMode(buton3,INPUT_PULLUP);
pinMode(led1,OUTPUT); // Kırmızı
pinMode(led2,OUTPUT); // Sarı
pinMode(led3,OUTPUT); //Yeşil
Serial.begin(9600);
}

void loop() {
if(!(digitalRead(5)))
butondurum=1;
if(!(digitalRead(6)))
butondurum=2;
if(!(digitalRead(7)))
butondurum=4;

switch (butondurum)
{
  case 1:
  Serial.println("kırmızı Dugmeye Basildi");
  digitalWrite(8,HIGH); //Kırmızı Yak
    break;
  case 2:
  Serial.println("Sarı Dugmeye Basildi");
  digitalWrite(9,HIGH); // Sarı yak
  break;
  case 3:
  Serial.println("Yeşil Dugmeye Basildi");
  digitalWrite(10,HIGH); //Yeşil Yak
  break;
 
  default:
  Serial.println();
}
butondurum=0;
delay(200);
}
