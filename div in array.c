#include<stdio.h>
int div_arr();

int main(){

int n;
printf("\nHow many elements of array you want to input : ");
scanf("%d",&n);

int num;
printf("\nEnter number you want to find divisibles in array: ");
scanf("%d",&num);

int arr[n];

printf("\nInput elements in an array with space : ");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}


printf("\nTotal elements Divisible by %d is : %d",num,div_arr(num,n,arr));


}

int div_arr(int num,int n,int arr[n]){

int count = 0;

for(int i=0;i<n;i++){

if(arr[i] % num == 0){

count++;

}

}

return count;

}