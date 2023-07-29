#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
