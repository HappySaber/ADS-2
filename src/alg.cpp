// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double step = value;
  double res = value;
  for (uint16_t i = 1; i < n; i++) {
    res *= step;
  }
  return res;
}
uint64_t fact(uint16_t n) {
    double f = 1;
    for (uint16_t i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
double calcItem(double x, uint16_t n) {
    double step = x;
  return pown(x, n) / fact(n);
}
double expn(double x, uint16_t count) {
    double expx = 1;
    for (uint16_t i = 1; i <= count; i++) {
      expx = expx + calcItem(x, i);
    }
    return expx;
}
double sinn(double x, uint16_t count) {
    double sinx = x;
    for (uint16_t i = 1; i < count; i++) {
        sinx = sinx + calcItem(x, 2 * i - 1) * pown(-1, i - 1);
    }
    return sinx;
}
double cosn(double x, uint16_t count) {
    double cosx = 1;
    for (uint16_t i = 1; i < count; i++) {
        cosx = cosx + calcItem(x, 2 * i - 2) * pown(-1, i - 1);
    }
    return cosx;
}
