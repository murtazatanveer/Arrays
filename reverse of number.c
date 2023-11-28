#include<stdio.h>
int main(){

int count;
 
 printf("\nHow many digits you want to reverse : ");

scanf("%d",&count);

int num[count];

for(int i=0;i<count;i++){

num[i]=0;

}

printf("\nEnter %d single digits with spaces : ",count);


for(int i=0; i<count;i++){

scanf("%d",&num[i]);

}


printf("\nReverse : ");


for(int i=(count-1); i>=0;i--){

printf("%d",num[i]);

}


}