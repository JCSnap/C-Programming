// Write a data structure to describe a register and its operations
#include <stdint.h>

#define NUM_REGISTERS 32

typedef struct {
  uint32_t registers[NUM_REGISTERS];
} RegisterFile;

uint32_t readRegister(RegisterFile *rf, uint32_t regNum) {
  return rf->registers[regNum];
}

void writeRegister(RegisterFile *rf, uint32_t regNum, uint32_t value) {
  if (regNum >= NUM_REGISTERS) {
    return;
  }
  rf->registers[regNum] = value;
}

int main(void) {
  return 0;
}
