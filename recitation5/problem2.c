#include<stdio.h>

int main() {
    int x;
    int y;
    x = 0x89ABCDEF;
    y = 0x76543210;
    int mask1 = 0x000000FF;
    int mask2 = 0xFFFFFF00;
    int temp1 = (x & mask1);
    int temp2 = (y & mask2);
    int answer = (x | y);
    
}