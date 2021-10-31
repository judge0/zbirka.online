#include <stdio.h>

int main() {
  float t_f;
  scanf("%f", &t_f);

  float t_c = (5. / 9.) * (t_f - 32);
  printf("%.2f °F = %.2f °C\n", t_f, t_c);

  return 0;
}