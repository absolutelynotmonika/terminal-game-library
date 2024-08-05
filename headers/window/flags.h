#pragma once

/* These flags are used to pass values into one single
 * parameter, it's really hard to explain but the format is gonna be:
 * func(FLAG1 | FLAG2 | etc...)
*/

/* so far these flags are only present here but
 * this isn't gonna be their only use.
*/

constexpr int WINDOW_BORDER = 1 << 0;
