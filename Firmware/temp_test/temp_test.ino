const int BAT_PIN = 8;
const int TEMP_PIN = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(BAT_PIN, INPUT);
  pinMode(TEMP_PIN, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  int bat_v = analogRead(BAT_PIN) * 4.2;
  Serial.println("Battery voltage: "+bat_v);

  int temp = analogRead(TEMP_PIN);
  Serial.println("Temperature: "+temp);

  delay(1000);
}
