#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "float.h"



int is_special ( float f ) {

    return 0;

}


float get_M  ( float f ) {
    myfloat temp
    temp.number = f;
    int mantissa = temp.raw.mantissa;
    float fraction = 0;
    int i;
    for (i = 22; i >= 0; i--) {
        if ((mantissa >> i) & 1) {
            fraction += pow(2, i-23);
        }
    }
    return fraction;
}


int get_s ( float f ) {
	
	int sign = *f >> 31;
    if (sign == 0) {
        return 1;
    }
    else if (sign == 1) {
        return -1;
    }
}



int get_E ( float f ) {
	myfloat temp;
    temp.number = f;
    int exponent = temp.raw.exponent - 127;
    return exponent;
}













      



    
    
