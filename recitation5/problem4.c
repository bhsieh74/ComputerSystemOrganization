#include<stdio.h>

int checkit(char letter, int num) {
    if (letter == 'a') {
        if (x | 0 != 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (letter == 'b') {
        if (x | 0 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (letter == 'c') {
        if (x & 127 > 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (letter == 'd') {
        if (~x & 127 > 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main() {
    int test1, test2, test3;
    test1 = checkit('a', 23);
    test2 = checkit('b', 23);
    test3 = checkit('c', 23);
    printf("%d\n%d\n%d\n", test1, test2, test3);
}