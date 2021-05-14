#include<stdio.h>


int is_little_endian() {
    int temp = 1;
    char *temp2 = &temp;
    if (temp2[0]) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int x;
    x = is_little_endian();
    printf("%d\n", x);
}