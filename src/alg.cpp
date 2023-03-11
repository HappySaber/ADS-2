// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  uint16_t step = value;
  for (uint16_t i = 1; i < n; i++) {
    value *= step;
  }
  return value;
}
uint64_t fact(uint16_t n) {
    uint16_t f = 0;
    for (uint16_t i = 0; i <= n; i++) {
        f *= i;
    }
    return f;
}
double calcItem(double x, uint16_t n) {
    uint16_t step = x;
  return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
    uint16_t expx = 1;
    for (uint16_t i = 1; i <= count; i++) {
      expx = expx + calcItem(x, i);
    }
    return expx;
}
double sinn(double x, uint16_t count) {
    uint16_t sinx = 0;
    for (uint16_t i = 1; i <= count; i++) {
        sinx = sinx + calcItem(x, 2 * i - 1) * pown(-1, i - 1);
    }
    return sinx;
}
double cosn(double x, uint16_t count) {
    uint16_t cosx = 0;
    for (uint16_t i = 1; i <= count; i++) {
        cosx = cosx + calcItem(x, 2 * i - 2) * pown(-1, i - 1);
    }
    return cosx;
}
