#include <stdint.h>
#include <stdbool.h>

typedef uint8_t uint6_t;
typedef uint8_t uint2_t;

void Control(uint6_t opcode,
    bool *_RegDst,
    bool *_Branch,
    bool *_MemRead,
    bool *_MemtoReg,
    uint2_t *_ALUOp,
    bool *_MemWrite,
    bool *_ALUSrc,
    bool *_RegWrite) {

  // Setting defaults
  *_RegDst = false;
  *_ALUSrc = false;
  *_MemRead = false;
  *_ALUOp = 0;

  switch(opcode) {
    case 0b000000: // R-Type
      *_RegDst = true;
      *_ALUSrc = false;
      *_RegWrite = true;
      *_ALUOp = 0b10;
      break;

    case 0b100011: // lw
      *_MemRead = true;
      *_MemtoReg = true;
      *_ALUSrc = true;
      *_ALUOp = 0b00;
      break;

    case 0b101011: // sw
      *_MemWrite = true;
      *_ALUSrc = true;
      *_ALUOp = 0b00;
      break;

    case 0b000100: // beq
      *_Branch = true;
      *_ALUOp = 0b01;
      break;

    case 0b001000: // addi
      *_ALUSrc = true;
      *_ALUOp = 0b00;
      break;

    case 0b001101: // ori
      *_ALUSrc = true;
      *_ALUOp = 0b00;
      break;

    case 0b001010: // slti
      *_ALUSrc = true;
      *_ALUOp = 0b00;
      break;

    case 0b000010: // j
      *_Branch = true;
      *_ALUOp = 0b01;
      break;

    default:
      break;
  }
}

int main(void) {
  return 0;
}
