#include<stdio.h>

long bar(long a, long b) {
        long x;
        long y = 0;
        long z;
        long temp;

        x = a;
        z = (a * 5);
        z = (z * 2) + a;
        temp = (b << 4);
        z = z + (b * 2);
        z = z - temp;
        z = z + 1;
        while (x <= b) {
                x = x + 1;
                y = y + z;
        }


        return y;
}
