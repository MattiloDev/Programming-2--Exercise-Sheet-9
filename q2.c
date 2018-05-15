
#include <stdio.h>

struct TRIARR{

	int row;
	int col;
	
};

typedef int* TRIARR;

TRIARR triNew(int N);
void triStore(struct TRIARR as, int N, int M, int row, int col, int val);
int triFetch(struct TRIARR as, int N, int M, int row, int col);

int main(){
    
    
	
	triNew(6);	
    	

	
}

TRIARR triNew(int N)  {

    int **as;

	as = (int **) malloc(N  *sizeof(int *));

    for (int i = 0; i <= N; i++) {

		as[i] = (int *) malloc(i+1 * sizeof(int));

	}

    return as;

}

void triStore(struct TRIARR as, int N, int M, int row, int col, int val){
	if((row < N) && (col < M) && (col >= row)){
		printf("Set location [%d,%d] to %d\n", row, col, val);
		as[row][col] = val;
	} else {
		printf("Invalid Location!\n");
	}
}

int triFetch(struct TRIARR as, int N, int M, int row, int col){
	if((row < N) && (col < M) && (col >= row)){
        	printf("Fetched value %d at location [3,5]\n", as[row][col]);
        	return as[row][col];
    	} else {
		printf("Invalid location!\n");
		return 0;
    	}
}