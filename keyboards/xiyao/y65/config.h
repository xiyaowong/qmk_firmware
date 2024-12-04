#pragma once

#define USE_I2C
#define SOFT_SERIAL_PIN D0

#define MATRIX_ROWS 10
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, NO_PIN }
#define MATRIX_ROW_PINS_RIGHT { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS_RIGHT { F4, F5, F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW
