#include "display.h"

#include <Arduino_GFX_Library.h>

namespace {

Arduino_ESP32QSPI displayBus(
    qc::DISPLAY_PIN_CS,
    qc::DISPLAY_PIN_SCLK,
    qc::DISPLAY_PIN_SDIO0,
    qc::DISPLAY_PIN_SDIO1,
    qc::DISPLAY_PIN_SDIO2,
    qc::DISPLAY_PIN_SDIO3);

Arduino_CO5300 gfx(
    &displayBus,
    qc::DISPLAY_PIN_RESET,
    qc::DISPLAY_ROTATION,
    qc::DISPLAY_IS_IPS,
    qc::DISPLAY_WIDTH,
    qc::DISPLAY_HEIGHT);

}  // namespace

bool displayBegin() {
  return gfx.begin();
}

void displayClear(uint16_t color) {
  gfx.fillScreen(color);
}

void displayDrawPixel(int16_t x, int16_t y, uint16_t color) {
  gfx.drawPixel(x, y, color);
}

void displayDrawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) {
  gfx.drawLine(x0, y0, x1, y1, color);
}

void displayDrawCircle(int16_t x, int16_t y, int16_t radius, uint16_t color) {
  gfx.drawCircle(x, y, radius, color);
}

void displayFillCircle(int16_t x, int16_t y, int16_t radius, uint16_t color) {
  gfx.fillCircle(x, y, radius, color);
}

void displayDrawRect(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color) {
  gfx.drawRect(x, y, width, height, color);
}

void displayFillRect(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color) {
  gfx.fillRect(x, y, width, height, color);
}

void displayDrawTestScreen() {
  displayClear(qc::COLOR_BLACK);

  displayDrawLine(
      qc::COMPANION_STEM_X,
      qc::COMPANION_STEM_BOTTOM_Y,
      qc::COMPANION_STEM_X,
      qc::COMPANION_STEM_TOP_Y,
      qc::COLOR_GREEN);

  displayFillCircle(
      qc::COMPANION_STEM_X + qc::COMPANION_LEFT_LEAF_X_OFFSET,
      qc::COMPANION_STEM_TOP_Y + qc::COMPANION_LEFT_LEAF_Y_OFFSET,
      qc::COMPANION_LEAF_RADIUS,
      qc::COLOR_DARK_GREEN);

  displayFillCircle(
      qc::COMPANION_STEM_X + qc::COMPANION_RIGHT_LEAF_X_OFFSET,
      qc::COMPANION_STEM_TOP_Y + qc::COMPANION_RIGHT_LEAF_Y_OFFSET,
      qc::COMPANION_LEAF_RADIUS,
      qc::COLOR_GREEN);

  displayFillRect(
      qc::COMPANION_BASE_X,
      qc::COMPANION_BASE_Y,
      qc::COMPANION_BASE_WIDTH,
      qc::COMPANION_BASE_HEIGHT,
      qc::COLOR_BROWN);

  displayDrawRect(
      qc::COMPANION_BASE_X,
      qc::COMPANION_BASE_Y,
      qc::COMPANION_BASE_WIDTH,
      qc::COMPANION_BASE_HEIGHT,
      qc::COLOR_WHITE);
}
