// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i * i <= value; ++i) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int value = 0;
  int bre = 0;
  for (int i = 2; bre < n; ++i) {
        if (checkPrime(i) == true) {
          value = i;
          bre++;
        }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
  value++;
  while (checkPrime(value) == false)
    value++;
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++)
    if (checkPrime(i) == true)
      sum = sum + i;
  return sum;
}
