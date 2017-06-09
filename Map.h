/*
   Sol v2: https://github.com/evilgeniuslabs/sol-v2
   Copyright (C) 2015-2016 Jason Coon

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

uint8_t coordsX[NUM_LEDS] =
{
  255, 253, 250, 245, 237, 228, 217, 205, 191, 176, 160, 144, 127, 110, 94, 78, 63, 49, 37, 26, 17, 9, 4, 1, 0, 1, 4, 9, 17, 26, 37, 49, 63, 78, 94, 110, 127, 144, 160, 176, 191, 205, 217, 228, 237, 245, 250, 253,
  240, 239, 236, 230, 222, 213, 201, 188, 174, 159, 143, 127, 111, 95, 80, 66, 53, 41, 32, 24, 18, 15, 14, 15, 18, 24, 32, 41, 53, 66, 80, 95, 111, 127, 143, 159, 174, 188, 201, 213, 222, 230, 236, 239,
  226, 225, 221, 215, 207, 197, 185, 172, 158, 143, 127, 111, 96, 82, 69, 57, 47, 39, 33, 29, 28, 29, 33, 39, 47, 57, 69, 82, 96, 111, 127, 143, 158, 172, 185, 197, 207, 215, 221, 225,
  212, 210, 206, 198, 187, 174, 160, 144, 127, 110, 94, 80, 67, 56, 48, 44, 42, 44, 48, 56, 67, 80, 94, 110, 127, 144, 160, 174, 187, 198, 206, 210,
  198, 196, 191, 182, 171, 158, 143, 127, 111, 96, 83, 72, 63, 58, 56, 58, 63, 72, 83, 96, 111, 127, 143, 158, 171, 182, 191, 196,
  184, 182, 176, 167, 155, 142, 127, 112, 99, 87, 78, 72, 70, 72, 78, 87, 99, 112, 127, 142, 155, 167, 176, 182,
  170, 167, 161, 152, 140, 127, 114, 102, 93, 87, 85, 87, 93, 102, 114, 127, 140, 152, 161, 167,
  155, 152, 141, 127, 113, 102, 99, 102, 113, 127, 141, 152,
  141, 134, 120, 113, 120, 134,
  127
};

uint8_t coordsY[NUM_LEDS] =
{
  127, 144, 160, 176, 191, 205, 217, 228, 237, 245, 250, 253, 255, 253, 250, 245, 237, 228, 217, 205, 191, 176, 160, 144, 127, 110, 94, 78, 63, 49, 37, 26, 17, 9, 4, 1, 0, 1, 4, 9, 17, 26, 37, 49, 63, 78, 94, 110,
  127, 143, 159, 174, 188, 201, 213, 222, 230, 236, 239, 240, 239, 236, 230, 222, 213, 201, 188, 174, 159, 143, 127, 111, 95, 80, 66, 53, 41, 32, 24, 18, 15, 14, 15, 18, 24, 32, 41, 53, 66, 80, 95, 111,
  127, 143, 158, 172, 185, 197, 207, 215, 221, 225, 226, 225, 221, 215, 207, 197, 185, 172, 158, 143, 127, 111, 96, 82, 69, 57, 47, 39, 33, 29, 28, 29, 33, 39, 47, 57, 69, 82, 96, 111,
  127, 144, 160, 174, 187, 198, 206, 210, 212, 210, 206, 198, 187, 174, 160, 144, 127, 110, 94, 80, 67, 56, 48, 44, 42, 44, 48, 56, 67, 80, 94, 110,
  127, 143, 158, 171, 182, 191, 196, 198, 196, 191, 182, 171, 158, 143, 127, 111, 96, 83, 72, 63, 58, 56, 58, 63, 72, 83, 96, 111,
  127, 142, 155, 167, 176, 182, 184, 182, 176, 167, 155, 142, 127, 112, 99, 87, 78, 72, 70, 72, 78, 87, 99, 112,
  127, 140, 152, 161, 167, 170, 167, 161, 152, 140, 127, 114, 102, 93, 87, 85, 87, 93, 102, 114,
  127, 141, 152, 155, 152, 141, 127, 113, 102, 99, 102, 113,
  127, 139, 139, 127, 115, 115,
  127
};

// Params for width and height
const uint8_t kMatrixWidth = 16;
const uint8_t kMatrixHeight = 16;

const uint8_t maxX = kMatrixWidth - 1;
const uint8_t maxY = kMatrixHeight - 1;

uint8_t coordsX16[NUM_LEDS] = {
  16, 16, 16, 15, 15, 14, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 15, 15, 16, 16,
  15, 15, 15, 14, 14, 13, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 3, 2, 2, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 14, 14, 15, 15,
  14, 14, 14, 13, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 13, 14, 14,
  13, 13, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 4, 4, 3, 3, 3, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 13,
  12, 12, 12, 11, 11, 10, 9, 8, 7, 6, 5, 5, 4, 4, 4, 4, 4, 5, 5, 6, 7, 8, 9, 10, 11, 11, 12, 12,
  12, 11, 11, 10, 10, 9, 8, 7, 6, 5, 5, 5, 4, 5, 5, 5, 6, 7, 8, 9, 10, 10, 11, 11,
  11, 10, 10, 10, 9, 8, 7, 6, 6, 5, 5, 5, 6, 6, 7, 8, 9, 10, 10, 10,
  10, 10, 9, 8, 7, 6, 6, 6, 7, 8, 9, 10,
  9, 8, 8, 7, 8, 8,
  8
};

uint8_t coordsY16[NUM_LEDS] =
{
  8, 9, 10, 11, 12, 13, 14, 14, 15, 15, 16, 16, 16, 16, 16, 15, 15, 14, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 13, 13, 14, 14, 15, 15, 15, 15, 15, 14, 14, 13, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 3, 2, 2, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 12, 13, 13, 14, 14, 14, 14, 14, 13, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 5, 6, 7,
  8, 9, 10, 11, 12, 12, 13, 13, 13, 13, 13, 12, 12, 11, 10, 9, 8, 7, 6, 5, 4, 4, 3, 3, 3, 3, 3, 4, 4, 5, 6, 7,
  8, 9, 10, 11, 11, 12, 12, 12, 12, 12, 11, 11, 10, 9, 8, 7, 6, 5, 5, 4, 4, 4, 4, 4, 5, 5, 6, 7,
  8, 9, 10, 10, 11, 11, 12, 11, 11, 10, 10, 9, 8, 7, 6, 5, 5, 5, 4, 5, 5, 5, 6, 7,
  8, 9, 10, 10, 10, 11, 10, 10, 10, 9, 8, 7, 6, 6, 5, 5, 5, 6, 6, 7,
  8, 9, 10, 10, 10, 9, 8, 7, 6, 6, 6, 7,
  8, 9, 9, 8, 7, 7,
  8
};

void setPixelXY(uint8_t x, uint8_t y, CRGB color) {
  if (x >= kMatrixWidth || y >= kMatrixHeight)
    return;

  for (uint8_t i = 0; i < NUM_LEDS; i++) {
    if (coordsX16[i] != x)
      continue;

    if (coordsY16[i] != y)
      continue;

    leds[i] = color;
  }
}

