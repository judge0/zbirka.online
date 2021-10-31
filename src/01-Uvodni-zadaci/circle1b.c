#include <stdio.h>
#include <stdlib.h>

int main() {
  int x_p, y_p;
  int r, x_c, y_c;

  scanf("%d%d", &x_p, &y_p);
  scanf("%d%d%d", &r, &x_c, &y_c);

  if (r <= 0) {
    perror("Uneseni radijus mora biti pozitivan.");
    return 1;
  }

  /* Budući da radimo s cjelobrojnim tipovima moguće je u potpunosti
    zaobići rad s tipovim s pomičnom točkom. */
  int distance = (x_c - x_p) * (x_c - x_p) + (y_c - y_p) * (y_c - y_p);

  /* Pazimo da uspoređujemo s kvadratom radijusa jer nismo korijenovali
   udaljenost. */
  if (distance == r * r) {
    printf("Tocka se nalazi na kruznici.\n");
  } else if (distance > r * r) {
    printf("Tocka se nalazi izvan kruznice.\n");
  } else {
    printf("Tocka se nalazi unutar kruznice.\n");
  }

  return 0;
}