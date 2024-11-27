#include <stdio.h>

int largest(int a, int b, int c) {
  if (a >= b && a >= c) {
    return a;
  } else if (b >= a && b >= c) {
    return b;
  } else {
    return c;
  }
}

int main() {
  int x, y, z;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &x, &y, &z);

  int largestNumber = largest(x, y, z);
  printf("The largest number is: %d\n", largestNumber);

  return 0;
}
