#include<stdio.h>
#include<stdint.h>

uint32_t Ch(uint32_t x, uint32_t y, uint32_t z){
    return (x & y) ^ (~x & z);
}

uint32_t Maj(uint32_t x, uint32_t y, uint32_t z){
    return (x & y) ^ (x & z) ^ (y & z);
}

uint32_t SHR(uint32_t x, int n){
    // bit-shift x to the right
    return x>>n;
}

uint32_t ROTR(uint32_t x, int n){
    return (x>>n) | (x << (32 - n));
}

int main(int argc, char *argv[]){
    uint32_t x = 0x0f0f0f0f;
    uint32_t y = 0xcccccccc;
    uint32_t z = 0x55555555;

    printf("x= %08x\ny= %08x\nz= %08x\n", x, y, z);

    printf("Ch(x,y,z) = %08x\n", Ch(x,y,z));
    printf("Maj(x,y,z) = %08x\n", Maj(x,y,z));

    return 0;
}