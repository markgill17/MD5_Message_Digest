#include<stdio.h>
// includes formatters for printing 64 bit integers
#include<inttypes.h>

union block{
    uint64_t sixFour[8];
    uint32_t threeTwo[16];
    uint8_t eight[64];
};

uint64_t NoZerosBytes(uint64_t nobits){
    // the number of bits from the file
    uint64_t result = 512ULL - (nobits % 512ULL);

    // find out if there is enough room in the last block to do the padding or will a new block be needed
    if (result < 65)// 65 64(length integer and the 1)
        result += 512;

    // get the number of 0 bytes needed to pad between the 1 and the 64 bit integer
    result -=72;
    return (result/ 8ULL);
}

int main(int argc, char* argv){

    if (argc != 2){
        printf("Error: Expecting single filename as argument\n");
        return 1;
    }

    FILE *infile = fopen(argv[1], "rb");

    if(!infile){
        printf("Error: Could not open file %s\n", argv[1]);
        return 1;
    }

    uint8_t b;

    uint64_t nobits;

    union block M;
    uint8_t i;

    //  '&' is the address of b not the value of b
    // nobits += 8 gets the number of bits read
    for(;fread(&b, 1, 1, infile) == 1; nobits += 8){
        printf("%02" PRIx8, M.eight[i]);
    }

    // this is appended to the message block
    printf("%02", PRIx8, 0x80);

    for(uint64_t i = NoZerosBytes(nobits); i > 0; i--)
        printf("%02" PRIx8, 0x00);
    // prints the number of bits to the screen
    printf("%016" PRIx64 "\n", nobits);

    fclose(infile);

    return 0;
}