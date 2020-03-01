#include<stdio.h>
// includes formatters for printing 64 bit integers
#include<inttypes.h>

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

    //  '&' is the address of b not the value of b
    for(;fread(&b, 1, 1, infile) == 1;){
        printf("%02x", b);
    }

    printf("\n");

    fclose(infile);

    return 0;
}