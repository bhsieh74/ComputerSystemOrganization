#include<stdio.h>

// Brian Hsieh Problem 1
// This program is a date compression program where it takes every digit of the date and converts it to binary. Then it combines the binary of all the digits into one single integer. 

void getNumber() {
    int a[10];
    char str[10];
    //Now we are retrieving the input from the user. I am using %1d to only get 1 digit from the user instead of getting double digit integers
    //The character array str is used for storing the colons and / from the date. 
    scanf("%1%d %1d %c %1d %1d %1d %1d %c %1d %1d %c %1d %1d", &a[0], &a[1], str, &a[2], &a[3], &a[4], &a[5], str, &a[6], &a[7], str, &a[8], &a[9]);
    
    //checking for invalid inputs now
    
    //Checking tens digit for months
    if (a[0] > 2) {
        printf("INVALID");
        return;
    }
    //Checking tens digit for days
    if (a[2] > 3) {
        printf("INVALID");
        return;
    }
    //Checking tens digit in hours
    if (a[4] > 2) {
        printf("INVALID");
        return;
    }
    //Checking tens digit in minutes
    if (a[6] > 6) {
        printf("INVALID");
        return;
    }
    //Checking tens digit in seconds
    if (a[8] > 6) {
        printf("INVALID");
        return;
    }

    //We are going to be doing bit manipulation on this integer full of zeroes. 
    int answer = 0b00000000000000000000000000000000;

    //For each digit in the array, we are going to use the OR operator so that we can put all of the 1's into the answer. Then we shift the answer to the left.
    answer = (answer | a[0]);
    answer = (answer<<4);
    answer = (answer | a[1]);
    answer = (answer<<2);
    answer = (answer | a[2]);
    answer = (answer<<4);
    answer = (answer | a[3]);
    answer = (answer<<2);
    answer = (answer | a[4]);
    answer = (answer<<4);
    answer = (answer | a[5]);
    answer = (answer<<3);
    answer = (answer | a[6]);
    answer = (answer<<4);
    answer = (answer | a[7]);
    answer = (answer<<3);
    answer = (answer | a[8]);
    answer = (answer<<4);
    answer = (answer | a[9]);

    printf("%d\n", answer);
    return;
}

int main() {
    int dates;
    //Asking the user for how many dates they want converted
    printf("How many dates do you want to convert?");
    scanf("%d", &numbers);
    int i;
    for (i = 0; i < numbers; i++) {
        getNumber();
    }
    
    return 0;
}
