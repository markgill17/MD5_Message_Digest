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

uint32_t Sig0(uint32_t x){
    return ROTR(x, 2) ^ ROTR(x, 13) ^ ROTR(x, 22);
}

uint32_t Sig1(uint32_t x){
    return ROTR(x, 6) ^ ROTR(x, 11) ^ ROTR(x, 25);
}

uint32_t Sig2(uint32_t x){
    return ROTR(x, 4) ^ ROTR(x, 18) ^ SHR(x, 3);
}

uint32_t Sig3(uint32_t x){
    return ROTR(x, 17) ^ ROTR(x, 19) ^ SHR(x, 10);
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