#include <stdio.h>


    int analyse(int *wholePtr , double *fracPtr, double d) {

        int dInt = d;   // converting from double to int truncates the double leaving only the whole part 
        
        double dFrac = d - dInt; 
        
        dInt = abs(dInt); // converts variables to thier absolute values
        dFrac = fabs(dFrac);
        
        fracPtr = &dFrac;   //initializes the pointers
        wholePtr = &dInt;
        
        *fracPtr = dFrac;   // pointers set to point to the value of the variables
        *wholePtr = dInt;
        
        if (d >= 0) {

            return 1;
        }

        else {
            return -1;
        }
    }

        analyse(0,0,-32.7);

}