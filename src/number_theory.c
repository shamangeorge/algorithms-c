#include "number_theory.h"

long gcd_naive(long A, long B) {
  int m = min(A, B), gcd;
  for(int i = m; i > 0; --i) {
    if(A % i == 0 && B % i == 0) {
      gcd = i;
      return gcd;
    }
  }
  return 1;
}

long gcd(long A, long B) {
  if(B==0)
    return A;
  else
    return gcd(B, A % B);
}
