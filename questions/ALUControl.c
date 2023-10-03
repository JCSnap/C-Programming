#include <stdint.h>

typedef uint8_t uint6_t;
typedef uint8_t uint4_t;
typedef uint8_t uint2_t;

uint4_t ALUControl(uint2_t _ALUOp, uint6_t _funct) {
    uint4_t ALUControl;
    switch (_ALUOp) {
        case 0b00: // add for lw, sw
            ALUControl = 0b0010;
            break;
        case 0b01: // sub for beq
            ALUControl = 0b0110;
            break;
        case 0b10: // R-type
            switch (_funct) {
                case 0b100000: // add
                    ALUControl = 0b0010;
                    break;
                case 0b100010: // sub
                    ALUControl = 0b0110;
                    break;
                case 0b100100: // and
                    ALUControl = 0b0000;
                    break;
                case 0b100101: // or
                    ALUControl = 0b0001;
                    break;
                case 0b101010: // slt
                    ALUControl = 0b0111;
                    break;
                default:
                    ALUControl = 0b0110;
                    break;
            }
            break;
        default:
            ALUControl = 0b0110;
            break;
    }
    return ALUControl;
}

int main(void) {
  return 0;
}
