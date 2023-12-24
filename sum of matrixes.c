#include<stdio.h>
	#include<stdlib.h>
	int** matrixs_sum();
	
	int main(){
	
	int matrix_1[][3] = {1,2,3,4,5,6,7,8,9};
	
	int matrix_2[][3] = {9,8,7,4,5,6,9,8,7};
	
	int **ptr = matrixs_sum(matrix_1,matrix_2);
	
	for(int i=0;i<3;i++){
        printf("| ");

	for(int j=0;j<3;j++){
	
	printf(" %d",ptr[i][j]);
	
	}
	printf("  |\n");
	
	}
    }
	
	int** matrixs_sum(int mat_1[3][3] , int mat_2[3][3]){
	
	int **dynamic_dble_arr = (int**) malloc(3 * sizeof(int*));
	
	for(int i = 0;i<3;i++){
	
	dynamic_dble_arr[i] = (int*) malloc(3 * sizeof(int));
	
	}
	
	for(int i = 0 ; i<3;i++){

	    for (int j = 0; j < 3; j++)
	    {
    	        dynamic_dble_arr[i][j] = mat_1[i][j] + mat_2[i][j];

	    }
	    
	}
	
	return dynamic_dble_arr;	
    }