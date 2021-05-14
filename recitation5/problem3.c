#include<stdio.h>

unsigned replace(unsigned number, int position, unsigned char byte) {
    char *p = (char*)(&number);
    p[position] = byte;
    return x;
}

int main() {
    unsigned n = 0x12345678;
    int result;
    int result2; 
    result = replace(n, 2, 0xAB);
    result2 = replace(n, 0, 0xAB);
    printf("%x\n%x", result, result2);

}