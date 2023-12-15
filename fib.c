#include<stdio.h>
int fabo();

int main(){

int num;

printf("\nEnter number to find fab sequence : ");
scanf("%d",&num);

int arr[num];


printf("\nSum of First %d Fab Sequence is : %d",num,fabo(num,arr));

}

int fabo( int n , int fab[n]){

int sum = 0;

fab[0] = 0;
fab[1] = 1;

printf("\nFab Sequence is : 0 , 1 ,");

for(int i=2;i<n;i++){

fab[i] = fab[i-1] + fab[i-2];

sum = sum + fab[i];

printf(" %d ,",fab[i]);

}

return sum;

}