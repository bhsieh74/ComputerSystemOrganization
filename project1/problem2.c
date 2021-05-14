#include<stdio.h>

// Brian Hsieh Program 2
// This program converts RBG values to hexadecimal values
void getHex() {
    // Initializing the three numbers
    int num1, num2, num3;
    char str[5];
    char str2[5];
    // Gathering input from the user
    scanf("%d %s %d %s %d", &num1, str, &num2, str2, &num3);
    char hexcolor[20];
    int i = 0;
    // Checking if the values are valid or not
    if ((num1 > 255) | (num1 < 0)) {
        printf("INVALID");
        return;
    }
    else if ((num2 > 255) | (num2 < 0)) {
        printf("INVALID");
        return;
    }
    else if ((num3 > 255) | (num3 < 0)) {
        printf("INVALID");
        return;
    }
    // Starting with num3 because we will be storing the corresponding hex values in an 
    // array and printing them backwards
    if (num3 == 0) {
        hexcolor[i] = 0;
        hexcolor[i+1] = 0;
        i = i + 2;
    }
    
    while (num3 != 0) {
        int temp = 0;
        // Getting the remainder when mod by 16
        temp = num3 % 16;
        // If the remainder is less than 10, we can use numbers
        if (temp < 10) {
            hexcolor[i] = temp + 48;
            i = i + 1;
        }
        // If the remainder is greater than 10, we must use abcdef 
        else {
            hexcolor[i] = temp + 55;
            i = i + 1;
        }
        num3 = num3 / 16;
    }
    if (num2 == 0) {
        hexcolor[i] = 0;
        hexcolor[i+1] = 0;
        i = i + 2;
    }
    while (num2 != 0) {
        int temp2 = 0;
        temp2 = num2 % 16;
        if (temp2 < 10) {
            hexcolor[i] = temp2 + 48;
            i = i + 1;
        }
        else {
            hexcolor[i] = temp2 + 55;
            i = i + 1;
        }
        num2 = num2 / 16;
    }
     if (num1 == 0) {
        hexcolor[i] = 0;
        hexcolor[i+1] = 0;
        i = i + 2;
    }
    while (num1 != 0) {
        int temp3 = 0;
        temp3 = num1 % 16;
        if (temp3 < 10) {
            hexcolor[i] = temp3 + 48;
            i = i + 1;
        }
        else {
            hexcolor[i] = temp3 + 55;
            i = i + 1;
        }
        num1 = num1 / 16;
    }
    int j;
    printf("#");
    // Looping backwards in the array to print the hex values in the correct order
    for (j = i - 1; j >= 0; j--) {
        printf("%c", hexcolor[j]);
    }
    return;
}

int main() {
    int colors;
    printf("How many colors do you want to convert?");
    scanf("%d", &colors);
    int i;
    for (i = 0; i < colors; i++) {
        getHex();
    }
    
    return 0;
}


    
