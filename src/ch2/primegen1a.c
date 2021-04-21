/**
 * Zadatak: Refaktorirajte programski kôd iz prethodnog poglavlja koristeći
 * funkcije.
 **/

#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n) {
  /* Ako sam manji od 2 ili sam strogo veći od dva i paran, onda nisam prost.*/
  if (n < 2 || (n > 2 && (n % 2 == 0))) {
    return false;
  }

  /* Provjeravamo našu pretpostavku. */
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      /* Ako sam dijeljiv s i, onda sam prost.*/
      return false;
    }
  }

  return true;
}

int prime_product(int begin, int end) {
  int n = 1;

  for (int p = begin; p < end; ++p) {
    if (is_prime(p)) {
      n *= p;
    }
  }

  return n;
}

int main() {
  int begin, end;
  scanf("%d%d", &begin, &end);

  int n = prime_product(begin, end) + 1;

  if (is_prime(n)) {
    printf("Broj %d je prost.\n", n);
  } else {
    printf("Broj %d nije prost.\n", n);
  }

  return 0;
}