#include <stdio.h>
#include <stdint.h>

uint32_t six_middle_bits(uint32_t value);

int main() {

    uint32_t value_to_extract_from = 151121;

    uint32_t bits = six_middle_bits(value_to_extract_from);

    printf("%d is the 6 middle bits of %d\n", bits, value_to_extract_from);
    
}

uint32_t six_middle_bits(uint32_t value) {
    // TODO
    // Note how many bits the original value contains - 32
    // 0b xxxxxxxx xxxxxxxx xxxxxxxx xxxxxxxx
    // 0b 00000000 00000xxx xxx00000 00000000 - return value
    // and (&) bitwise operation

    uint32_t mask = 0b111111 << 13; // 0b00000000000001111110000000000000, mask = 516096
                                    // 0b1111110000000000000
                                    // 0b11110000
                                    // 0xF0

    return value & mask;
}