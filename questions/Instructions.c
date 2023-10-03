#include <stdint.h>

// define a data type that will hold an instruction (let's call it 'struct insn' of R-, I-, and J-type along with its sub fields
typedef union {
  struct {
    uint32_t opcode : 6;
    uint32_t rs : 5;
    uint32_t rt : 5;
    uint32_t rd : 5;
    uint32_t shamt : 5;
    uint32_t funct : 6;
  } r_type;

  struct {
    uint32_t opcode : 6;
    uint32_t rs : 5;
    uint32_t rt : 5;
    uint32_t immediate : 16;
  } i_type;

  struct {
    uint32_t opcode : 6;
    uint32_t address : 26;
  } j_type;

  uint32_t raw;
} insn;

int main(void) {
  return 0;
}
