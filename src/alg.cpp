// Copyright 2022 NNTU-CS
#include <math.h>
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int c = 0;
    for (int i = 1; i <= (value/2); i++) {
      if (0 == (value % i)) {
        c += 1;
      }
    }
    if (c == 1) {
      return true;
    } else {
      return false;
    }
}

uint64_t nPrime(uint64_t n) {
  int flag = 0;
    int j = 0;
    int c = 0;
    for (int i = 2; 0 == flag; i++) {
      j = i;
      int count = 0;
      int kor = sqrt(j);
      for (int i = 2; i <= kor; i++) {
        if (0 == j % i) {
          count += 1;
          break;
        }
      }
      if (0 == count) {
        c += 1;
        if (c == n) {
          flag = 1;
        }
      }
    }
    return j;
}

uint64_t nextPrime(uint64_t value) {
    int j = value + 1;
    int flag = 0;
    int c = 0;
    for (; 0 == flag; j++) {
      int count = 0;
      int kor = sqrt(j);
      for (int i = 2; i <= kor; i++) {
        if (0 == j % i) {
          count += 1;
          break;
        }
      }
      if (0 == count) {
        flag = 1;
      }
    }
    j -= 1;
    return j;
}

uint64_t sumPrime(uint64_t hbound) {
  int n = 0;
    int s = 0;
    for (int i = 2; i < hbound; i++) {
      n = i;
      int count = 0;
      int kor = sqrt(n);
      for (int i = 2; i <= kor; i++) {
        if (0 == n%i) {
          count += 1;
          break;
        }
      }
      if (0 == count) {
        s += n;
      }
    }
    return s;
}
