#include <stdio.h>
#include <string.h>

typedef struct {
  int x, y;
  char c[32];
} TMyStruct;

void f(TMyStruct *);

int main() {
  int i;

  TMyStruct t[3] = {{0, 1, "Hello"}, {1, 2, "world"}, {3, 5, "penguin"}};

  f(t);

  for (i = 0; i < 3; i++) {
    printf("t[ %d ].x = %d, t[ %d ].y = %d, t[ %d ].c = %s\n", i, t[i].x, i, t[i].y, i, t[i].c);
  }
}

void f(TMyStruct *t) {
  t->x++;
  t->y--;
  strcpy(t->c, "Yello");
}

