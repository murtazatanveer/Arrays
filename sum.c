#include<stdio.h>
int main(){

int count;
printf("\nHow many values you want to find sum of : ");
scanf("%d",&count);

int num[count],sum=0;


for(int i=0;i<count;i++){

printf("\nEnter %d value : ",i+1);
scanf("%d",&num[i]);

sum = sum + num[i];

}

printf("\nSum of %d values is : %d",count,sum);

}