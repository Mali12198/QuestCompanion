#include "security.h"

#include <Arduino.h>
#include <WiFi.h>

void securityBegin() {
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  btStop();
}
