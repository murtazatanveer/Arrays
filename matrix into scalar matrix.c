#include<stdio.h>
#include<stdlib.h>

int **into_scalar_matrix();

int main(){

int mat[3][3]={1,2,3,4,5,6,7,8,9};

int k = 10;

int **result_matrix = into_scalar_matrix(mat[3][3] ,k);

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

printf("%d ",result_matrix[i][j]);


}

printf("\n");

}


}

int **into_scalar_matrix(int martix[3][3] , int k){

int **result_matrix = (int**)  malloc(3*sizeof(int*));

for(int i=0;i<3;i++){

result_matrix[i] = (int*) malloc(3 * sizeof(int));

}

for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

if(i==j){

result_matrix[i][j]=k;

}
else{
result_matrix[i][j]=0;
}

}

}

return result_matrix;

}