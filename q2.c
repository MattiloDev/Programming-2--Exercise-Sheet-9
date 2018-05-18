#include <stdio.h>
#include <stdlib.h>

typedef int* TRIARR;

TRIARR triNew(int N) {
    
    TRIARR arrayPointer = (int*) malloc((((N * (N + 1)) / 2) + N) * sizeof(int));
    
    if (arrayPointer == NULL) {
        
        printf("pointer is NULL\n"); 
        
    }
    
    return arrayPointer; 
    
} 

int triStore(TRIARR as, int N, int row, int col, int val) {
    
    if (row <= col && row < N && col < N) { 
        
        *(as + (((col * (col + 1)) / 2) + row)) = val;
        
        return 1;
        
    }
    
    else  {
        
        return -1;
        
    }
}
    
int triFetch(TRIARR as, int N, int row, int col) {
    
    if (row <= col && row < N && col < N) {
       
        int val = *(as + (((col * (col + 1)) / 2) + row)); 
        printf("Value returned from %i , %i is %i \n", row, col, val);
        
        return 1;
        
    }
    
    else {
        
        return -1;
        
    }
}