// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 0 || value == 1) {
    return false;
  }
  else {
    for (int i = 2; i <= value; ++i) {
      if (value % i == 0) {
        return false;
      } else {
        return true;
      }
    }
  }
}

uint64_t nPrime(uint64_t n) {
  int value = 2;
  int bre = 0;
  while (bre < n) {
    if (checkPrime(value++)) {
      bre++;
    }
  }
  return --value;
}

uint64_t nextPrime(uint64_t value) {
  value++;
  while (checkPrime(value) == false) {
    value++;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i) == true)
      sum = sum + i;
  }
  return sum;
}
