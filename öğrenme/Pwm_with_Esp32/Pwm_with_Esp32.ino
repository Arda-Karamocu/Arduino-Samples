#define BLUELED 23

const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  ledcSetup(ledChannel, freq, resolution);

  ledcAttachPin(BLUELED, ledChannel);

}

void loop() {
  for (int dutyCycle = 0; dutyCycle <=255; dutyCycle++){
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }

}
