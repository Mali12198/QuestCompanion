#pragma once

#include <Arduino.h>

#include "config.h"

bool displayBegin();
void displayClear(uint16_t color = qc::COLOR_BLACK);
void displayDrawPixel(int16_t x, int16_t y, uint16_t color);
void displayDrawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
void displayDrawCircle(int16_t x, int16_t y, int16_t radius, uint16_t color);
void displayFillCircle(int16_t x, int16_t y, int16_t radius, uint16_t color);
void displayDrawRect(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
void displayFillRect(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);
void displayDrawTestScreen();
