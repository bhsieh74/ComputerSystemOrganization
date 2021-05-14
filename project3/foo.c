#include<stdio.h>

long foo(long a, long b) {
    long temp1;
    long temp2;
    long temp3;
    long temp4;
    long temp5;
    long returnvalue;

    temp1 = a * 3;
    temp1 = temp1 * 4 + a;
    temp1 = temp1 << 2;

    temp2 = b * 3;
    temp3 = temp2;
    temp3 = temp3 << 5;
    temp3 = temp3 - temp2;

    temp1 += temp3;

    b = b - a;
    temp4 = b * 3;
    temp4 = temp4 << 5;
    temp4 = temp4 - b;
    temp5 = temp4 + temp1;


    return temp5;

}