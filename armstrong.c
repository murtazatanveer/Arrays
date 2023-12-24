#include <stdio.h>
//program that check whether a given number is armstrong no are not:
 void is_armstrongNum(int n){

int sum=0,remainder;
int n_copy = n;

 while(n>0){
    remainder=n%10;
    sum = (sum) + (remainder*remainder*remainder);
    n/=10;

 }
 if(sum==n_copy){
    printf("the given no %d is armstrong no \n",n_copy);
 }else{
 printf("the given no %d is not armstrong no \n",n_copy);
 }


 }int main (){

    int n;
   printf("enter a three digit no:\n");
   scanf("%d",&n);
    is_armstrongNum(n);
 }