#include <math.h>
#include <stdio.h>

const float epsilon = 1e-5;

int main() {
  float a, b;
  scanf("%f%f", &a, &b);

  if (fabs(a) < epsilon) {
    if (fabs(b) < epsilon) {
      printf("Jednadžba ima beskonacno mnogo rjesenja.\n");
    } else {
      printf("Jednadžba nema rjesenja.\n");
    }
    return 0;
  }

  float x = -b / a;
  printf("x = %.2f\n", x);
  return 0;
}