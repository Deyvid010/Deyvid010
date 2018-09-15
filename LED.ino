const int pinLed=13;
void setup() {
  // put your setup code here, to run once:
pinMode (pinLed,OUTPUT);
}

void loop() {
  int p=analogRead(A0);
  int n=map(p,0,1024,20,5000);
  tone (pinLed,n);
  // put your main code here, to run repeatedly:

}
