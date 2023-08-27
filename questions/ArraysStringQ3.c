#include <stdio.h>

void f(char *);

int main() {
  char str[] = "cats";
  f(str);
  printf("%s\n", str);
}

void f(char *c) {
  while (*c) {
    (*c)++;
    c++;
  }
}


