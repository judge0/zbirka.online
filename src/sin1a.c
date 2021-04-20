#include <stdio.h>

#define MAX_ITERS 20

int main() {
  double x;
  scanf("%lf", &x);

  double partial_sum = 0.0;
  for (int k = 0; k < MAX_ITERS; ++k) {
    /* Izračunaj x^2k. */
    double x_p = x;
    for (int i = 0; i < 2 * k; ++i) {
      x_p *= x;
    }

    /* Izračunaj faktorijele. */
    double factorial = 1.0;
    for (int i = 1; i < 2 * (k + 1); ++i) {
      factorial *= i;
    }

    double coef = x_p / factorial;
    if (k % 2 == 1) {
      coef *= -1;
    }

    partial_sum += coef;
  }

  printf("sin(%lf) = %lf\n", x, partial_sum);
  return 0;
}