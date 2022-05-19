





void setup() {
Serial.begin(9600);
}

void loop() {
int sensorValue= analogRead(A0);
float mjera = sensorValue * (5.0 / 1023.0);
Serial.println(mjera);
}
