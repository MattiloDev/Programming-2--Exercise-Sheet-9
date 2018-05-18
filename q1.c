#include <stdio.h>

    int analyse(int *wholePtr , double *fracPtr, double d) {

        double dAbs;
            
        dAbs = fabs(d);
            
        *wholePtr = (int) dAbs; 
        *fracPtr = dAbs - *wholePtr; 
            
        if (d < 0) {
        
            return -1;
            
        }
        
        else {
            
            return 1;
            
        }
            
    }