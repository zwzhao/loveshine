// $Id$

#ifndef BLINKTORADIO_H
#define BLINKTORADIO_H

enum {
  AM_LOVESHINE = 6,
  TIMER_PERIOD_MILLI = 1000
};

typedef nx_struct LoveShineMsg {
  nx_uint16_t nodeid;
  nx_uint16_t counter;
  nx_uint16_t dest;
} LoveShineMsg;

#endif
