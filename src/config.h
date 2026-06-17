#pragma once

#include <Arduino.h>

namespace qc {

constexpr const char *PROJECT_NAME = "Quest Companion";
constexpr const char *FIRMWARE_VERSION = "v0.3 Display Framework";
constexpr const char *DISPLAY_READY_MESSAGE = "Display framework ready";
constexpr const char *DISPLAY_INIT_FAILED_MESSAGE = "Display init failed";

constexpr uint32_t SERIAL_BAUD_RATE = 115200;
constexpr uint32_t STARTUP_SERIAL_DELAY_MS = 200;
constexpr uint32_t MAIN_LOOP_DELAY_MS = 1000;

constexpr int16_t DISPLAY_WIDTH = 466;
constexpr int16_t DISPLAY_HEIGHT = 466;
constexpr uint8_t DISPLAY_ROTATION = 0;
constexpr bool DISPLAY_IS_IPS = false;

constexpr int8_t DISPLAY_PIN_CS = 12;
constexpr int8_t DISPLAY_PIN_SCLK = 11;
constexpr int8_t DISPLAY_PIN_SDIO0 = 4;
constexpr int8_t DISPLAY_PIN_SDIO1 = 5;
constexpr int8_t DISPLAY_PIN_SDIO2 = 6;
constexpr int8_t DISPLAY_PIN_SDIO3 = 7;
constexpr int8_t DISPLAY_PIN_RESET = -1;

constexpr uint16_t COLOR_BLACK = 0x0000;
constexpr uint16_t COLOR_WHITE = 0xFFFF;
constexpr uint16_t COLOR_GREEN = 0x07E0;
constexpr uint16_t COLOR_DARK_GREEN = 0x03E0;
constexpr uint16_t COLOR_BROWN = 0x8200;

constexpr int16_t COMPANION_STEM_X = DISPLAY_WIDTH / 2;
constexpr int16_t COMPANION_STEM_TOP_Y = 218;
constexpr int16_t COMPANION_STEM_BOTTOM_Y = 278;
constexpr int16_t COMPANION_LEAF_RADIUS = 16;
constexpr int16_t COMPANION_LEFT_LEAF_X_OFFSET = -18;
constexpr int16_t COMPANION_LEFT_LEAF_Y_OFFSET = 16;
constexpr int16_t COMPANION_RIGHT_LEAF_X_OFFSET = 18;
constexpr int16_t COMPANION_RIGHT_LEAF_Y_OFFSET = 8;
constexpr int16_t COMPANION_BASE_X = (DISPLAY_WIDTH / 2) - 36;
constexpr int16_t COMPANION_BASE_Y = 282;
constexpr int16_t COMPANION_BASE_WIDTH = 72;
constexpr int16_t COMPANION_BASE_HEIGHT = 42;

}  // namespace qc
