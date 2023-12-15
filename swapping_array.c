#include<stdio.h>
void swap_arr();
int main(){

int num;
printf("\nHow many elements you want to swap : ");
scanf("%d",&num);

int array[num];

swap_arr(num,array);

}

void swap_arr(int n,int arr[n]){

printf("\nInput the elements of array with spaces\n");

for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);

}


int temp;
int copy[n];

for(int i=0;i<n;i++){

temp = arr[i];

copy[n-1-i] = temp;

}

//AFTER SWAPPING
printf("\nAfter Swapping :");
for (int i=0;i<n;i++){

    if(i==(n-1)){

        printf(" %d",copy[i]);
        break;
    }

printf(" %d ,",copy[i]);

}


}