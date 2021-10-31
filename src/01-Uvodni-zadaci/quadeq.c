#include <math.h>
#include <stdio.h>

const float epsilon = 1e-5;

int main() {
  float a, b, c;
  scanf("%f%f%f", &a, &b, &c);

  // Imamo li uopce kvadratnu jednadzbu?
  if (fabs(a) < epsilon) {
    // Imamo li uopce linearnu jednadzbu?
    if (fabs(b) < epsilon) {
      if (fabs(c) < epsilon) {
        printf("Jednadžba ima beskonacno mnogo rjesenja.\n");
      } else {
        printf("Jednadžba nema rjesenja.\n");
      }
      return 0;
    }
    // b nije nula, postoji lin. jedn. bx + c = 0.
    printf("x = %f\n", -c / b);
    return 0;
  }

  // a nije nula, postoji kv. jedn. ax^2 + bx + c = 0.
  float d = b * b - 4 * a * c;
  float x = -b / (2 * a);
  float y = sqrt(fabs(d)) / (2 * a);

  if (d < 0) {
    printf("x1 = %f + %fi\n", x, y);
    printf("x2 = %f - %fi\n", x, y);
  } else {
    printf("x1 = %f\n", x + y);
    printf("x2 = %f\n", x - y);
  }

  return 0;
}