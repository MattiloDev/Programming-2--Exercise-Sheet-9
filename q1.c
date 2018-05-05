#include <stdio.h>

int main (void) {


    int analyse(int *wholePtr , double *fracPtr, double d) {

        int dInt = d;

        double dFrac = d - dInt;
        
        *fracPtr = dFrac;



        printf("The Whole part of the double is: %d", dInt);
        printf("The Fractional part of the double is: %lf", dFrac);
        
        if (d >= 0) {

            return 1;
        }

        else {

            return -1;

        }

    }

        analyse(0,0,3.8);

}