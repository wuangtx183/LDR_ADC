#include <Arduino.h>

#define LDR_PIN 34  // chân ADC nối với quang trở

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); // giá trị từ 0-4095
  delay(1000);
  Serial.println("Teleplot LDR demo ready!");
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  // Gửi giá trị ở định dạng TelePlot
  Serial.print(">LDR:");
  Serial.println(lightValue);

  delay(200); // đọc mỗi 200ms
}
