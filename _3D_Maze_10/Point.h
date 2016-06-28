
// Handy way to pass around X and Y as one variable

#ifndef Point_h
#define Point_h

#include "U8glib.h"

class Point
{
  public:
    void Set(u8g_uint_t x, u8g_uint_t y);
    u8g_uint_t X;
    u8g_uint_t Y;
};

#endif
