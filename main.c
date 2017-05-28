#include "main.h"

int main(void)
{
  long a = 51239812312312;
  long b = 1232354351452315;
  long k;
     printf("Please input an integer value: ");
   scanf("%ld", &k);
   printf("You entered: %ld\n", k);

  long d = gcd( a, b);
  long dr = gcd_naive(a, b);
  printf("O hai, %ld!\n", d);
  printf("O hai, %ld!\n", dr);
  return 0;
}
