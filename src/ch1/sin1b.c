/**
 * Zadatak: Za uneseni kut u radijanima ispišite njegov sinus. Sinus kuta
 * izračunajte koristeći parcijalnu sumu Maclaurinov reda. Optimizirajte
 * računanje potencija broja x i faktorijela.
 **/

#include <stdio.h>

#define MAX_ITERS 20

int main() {
  double x;
  scanf("%lf", &x);

  double x_p = x;
  double factorial = 1.0;
  double partial_sum = 0.0;

  for (int k = 0; k < MAX_ITERS; ++k) {
    double coef = x_p / factorial;
    if (k % 2 == 1) {
      coef *= -1;
    }

    partial_sum += coef;

    x_p *= x * x;
    factorial *= (2 * (k + 1)) * (2 * (k + 1) + 1);
  }

  printf("sin(%lf) = %lf\n", x, partial_sum);
  return 0;
}