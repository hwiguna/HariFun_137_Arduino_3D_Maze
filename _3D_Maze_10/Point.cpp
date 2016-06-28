
// Handy way to pass around X and Y as one variable

#include "U8glib.h"
#include "Point.h"

void Point::Set(u8g_uint_t x, u8g_uint_t y)
{
  X = x;
  Y = y;
}
