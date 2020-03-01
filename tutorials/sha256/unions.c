#include <stdio.h>
#include <inttypes.h>

union endian{
    uint8_t ei[2];
    uint16_t si;
};

int main(int argc, char* argv ){

    union endian my_union;
    my_union.si = 0xff;
    my_union.ei[0] = 0x2;
    my_union.ei[1] = 0xab;
    printf("16bit: %04" PRIX16 "\n", my_union.si);
    printf(" 8bit: %02" PRIX8 "%02" PRIX8 "\n", my_union.ei[0], my_union.ei[1]);
}