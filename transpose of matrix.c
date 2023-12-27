#include<stdio.h>
void transpose();
int main(){

int mat[3][2]={1,2,2,1,3,3};

transpose( 3,2, mat );

}

void transpose(int i , int j,int  matrix[i][j] ){

int x=i;
int y=j;

if(i!=j){

int temp = x;

x=y;

y=temp;

}

int result_matrix[x][y];


for(int a=0;a<x;a++){
    for(int b=0;b<y;b++){

       result_matrix[a][b]=matrix[b][a];

    }
}

for(int a=0;a<x;a++){
    for(int b=0;b<y;b++){

       printf("%d ",result_matrix[a][b]);

    }

    printf("\n");
}

}