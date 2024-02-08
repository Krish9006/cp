#include <stdio.h>

void printNum( int n) {
  if (n > 0) {
    printNum(n - 1);
    printf("%d ", n);
  }
  return;
}

int main() {
  int n = 10;
  printNum(n);
  getchar();
  return 0;
}