#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while (&num != 0) {
        int a = 0;
        int b = 0;
        int countbit = 0;
        int i;
        for (i = 0; i < 31; i++) {
            if (num&(1<<i)) {
                if (countbit%2 == 0) {
                    a|= (1<<i);
                }
                else {
                    b |= (1<<i);
                }
                countbit++;
            }
        printf("%d %d\n", a, b);
        scanf("%d", &num);
    }
    
    return 0;
}