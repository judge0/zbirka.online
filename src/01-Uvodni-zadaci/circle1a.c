#include <math.h>
#include <stdio.h>
#include <stdlib.h>

const float epsilon = 1e-3;

int main() {
  float x_p, y_p;
  float r, x_c, y_c;

  scanf("%f%f", &x_p, &y_p);
  scanf("%f%f%f", &r, &x_c, &y_c);

  if (r < 0 || fabs(r) < epsilon) {
    perror("Uneseni radijus mora biti pozitivan.");
    return 1;
  }

  float distance = sqrt(pow(x_c - x_p, 2) + pow(y_c - y_p, 2));

  if (fabs(distance - r) < epsilon) {
    printf("Tocka se nalazi na kruznici.\n");
  } else if (distance > r) {
    printf("Tocka se nalazi izvan kruznice.\n");
  } else if (distance < r) {
    printf("Tocka se nalazi unutar kruznice.\n");
  }

  return 0;
}