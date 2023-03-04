#include <stdio.h>

int main() {
  int n;

  printf("Enter an integer smaller than 10: ");
  scanf("%d", &n);

  if (n == 8) {
    printf("Whirlwind spinner pattern:\n");
    for (int i = 0; i < 7; i++) {
      for (int j = 0; j < 7; j++) {
        if (i == j || i == 6 - j || i == 3 || j == 3) {
          printf("* ");
        } else {
          printf(". ");
        }
      }
      printf("\n");
    }
  } else {
    printf("Invalid input.\n");
  }

  return 0;
}
