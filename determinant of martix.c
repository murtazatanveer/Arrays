#include<stdio.h>
int determinant_matrix();

int main(){

int mat[2][2]={5,4,10,6};

//expected output : -10

printf("Determinant : %d",determinant_matrix(mat));

}

int determinant_matrix(int matrix[2][2]){

int sum = (matrix[0][0] * matrix[1][1]) - ( matrix[1][0] * matrix[0][1]);

return sum;

}