#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define MUX(N) \
int##N##_t mux_##N(bool ctrl, int##N##_t in0, int##N##_t in1) { \
    return ctrl ? in1 : in0; \
}

MUX(32);

int main(void) {
  int32_t a = 5, b = 10;
  bool select = 0;
  int32_t result = mux_32(select, a, b);
  printf("mux_32(%d, %d, %d) = %d\n", select, a, b, result);
  return 0;
}
