#include<stdio.h>
void cyclically();
int main(){

int num;
printf("\nEnter no of integers you want to cyclically permute : ");
scanf("%d",&num);

int array[num];

printf("\nEnter %d integers with space : ",num);

for(int i=0;i<num;i++){

scanf("%d",&array[i]);

}

printf("\n\nBefore Cyclically Permutation : ");

for(int i=0;i<num;i++){

    if(i==(num-1)){

     printf(" %d",array[i]);
break;

    }

printf(" %d ,",array[i]);

}

cyclically(num,array);

}

void cyclically(int n,int arr[n]){

int cpy[n];

cpy[n-1]=arr[0];

for(int i=0;i<(n-1);i++){

cpy[i]=arr[i+1];


}

printf("\n\nAfter Cyclically Permutation : ");

for(int i=0;i<n;i++){

    if(i==(n-1)){

     printf(" %d",cpy[i]);
break;

    }

printf(" %d ,",cpy[i]);

}


}