#include <stdint.h>

#define DATA_MEMORY_SIZE 1073741824

typedef struct {
  uint32_t data[DATA_MEMORY_SIZE];
} DataMemory;

uint32_t readDataMemory(DataMemory *dataMemory, uint32_t address) {
  if (address/4 < DATA_MEMORY_SIZE) {
    return dataMemory->data[address/4];
  } else {
    return 0;
  }
}

uint32_t writeDataMemory(DataMemory *dataMemory, uint32_t address, uint32_t data) {
  if (address/4 >= DATA_MEMORY_SIZE) {
    return 0;
  }
  dataMemory->data[address/4] = data;
}

int main(void) {
  return 0;
}
