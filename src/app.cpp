#include "app.h"

#include <Arduino.h>

#include "config.h"
#include "display.h"
#include "security.h"

void appSetup() {
  Serial.begin(qc::SERIAL_BAUD_RATE);
  delay(qc::STARTUP_SERIAL_DELAY_MS);

  Serial.println(qc::PROJECT_NAME);
  Serial.println(qc::FIRMWARE_VERSION);

  securityBegin();

  if (!displayBegin()) {
    Serial.println(qc::DISPLAY_INIT_FAILED_MESSAGE);
    return;
  }

  displayDrawTestScreen();
  Serial.println(qc::DISPLAY_READY_MESSAGE);
}

void appLoop() {
  delay(qc::MAIN_LOOP_DELAY_MS);
}
