#include<stdio.h>
int main(){

int lar=-999999, n,sml=999999;

printf("\nEnter size of array to find smallest and largest number among them : ");

scanf("%d",&n);

int nums[n];

for(int i=0;i<n;i++){

printf("\nEnter value at index %d : ",i);

scanf("%d",&nums[i]);


if (lar<=nums[i]){

    lar=nums[i];
}

if(sml>=nums[i]){

sml=nums[i];

}

}

printf("\nLargest element of array is %d",lar);

printf("\nSmallest element of array is %d",sml);

}