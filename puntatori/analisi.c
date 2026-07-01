#include <stdio.h> 

void g(int* h) {
  (*h)++;
}

int f(int a, int* b) {
  g(b);
  return a + (*b);
}

int main() {
  int c = 1, d = 3, s = 6;
  s = f(c, &d);
}