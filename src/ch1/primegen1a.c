/**
 * Zadatak: Za unesen interval opisan prirodnim brojevima begin i end,
 * konstruirajte broj n = p_1 * p_2 * ... * p_k + 1, gdje su p_i prosti
 * brojevi iz intervala [begin, end>. Provjerite je li broj n prost.
 **/

#include <stdbool.h>
#include <stdio.h>

int main() {
  int begin, end;
  scanf("%d%d", &begin, &end);

  /* Dio 1. Konstruirati broj n = p_1 * p_2 * ... * p_k + 1,
    gdje je p_i prosti broj iz intervala [begin, end>.   */

  int n = 1;
  for (int p = begin; p < end; ++p) {
    /* Provjeri je li p prost. */
    bool is_prime = true;
    for (int i = 2; i * i <= p; ++i) {
      if (p % i == 0) {
        is_prime = false;
        break;
      }
    }

    if (p > 1 && is_prime) {
      n *= p;
    }
  }

  n += 1;

  /* Dio 2. Provjeriti je li broj p prost. */
  bool is_prime = true;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (n > 1 && is_prime) {
    printf("Broj %d je prost.\n", n);
  } else {
    printf("Broj %d nije prost.\n", n);
  }

  return 0;
}