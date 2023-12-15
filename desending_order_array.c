#include<stdio.h>
void assending_order();
int main(){

    int num;
    printf("\nHow many integers you want to put in Desending order : ");
    scanf("%d",&num);

int array[num];

printf("\nEnter integers with space : ");

for(int i=0;i<num;i++){

scanf("%d",&array[i]);

}

assending_order(num,array);


}


void assending_order(int n,int arr[n]){

int counter=0;

int cpy[n];

for(int i=0;i<n;i++){
    for( int j=0;j<n;j++){

if(arr[i]>arr[j]){

counter++;

          }

   

    }

    

 cpy[n-(counter+1)] = arr[i];

    counter=0;

    

}

printf("\nDesending Order is : ");

for(int i=0;i<n;i++){

    if(i==(n-1)){

      printf("%d",cpy[i]);
      break;

    }

printf("%d , ",cpy[i]);

}


}