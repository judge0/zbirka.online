#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  printf("Najmanji int: %d\n", INT_MIN);
  printf("Najveci  int: %d\n\n", INT_MAX);

  printf("Najmanji pozitivni float: %e\n", FLT_TRUE_MIN);
  printf("Najveci  pozitivni float: %e\n\n", FLT_MAX);

  printf("Najmanji pozitivni double: %e\n", DBL_TRUE_MIN);
  printf("Najveci  pozitivni double: %e\n\n", DBL_MAX);

  printf("Najmanji pozitivni long double: %Le\n", LDBL_TRUE_MIN);
  printf("Najveci  pozitivni long double: %Le\n\n", LDBL_MAX);
  return 0;
}