/**
 * Zadatak: Za uneseni prirodan broj n, provjerte je li prost.
 **/

#include <stdbool.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  /* Pretpostavljamo da je broj prost. */
  bool is_prime = true;

  /* Provjeravamo našu pretpostavku. */
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) { /* Ako sam dijeljiv s i, onda sam prost.*/
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