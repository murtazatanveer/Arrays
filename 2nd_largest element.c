#include<stdio.h>
int second_lar_ele();

int main(){

int num;
printf("\nEnter no of integers you want to check : ");
scanf("%d",&num);

int array[num];

printf("\nEnter %d integers with space : ",num);

for(int i=0;i<num;i++){

scanf("%d",&array[i]);

}

printf("\n2nd Largest element is : %d",second_lar_ele(num,array));

}


int second_lar_ele(int n , int arr[n]){

int cnt=0;
int i,j;


for( i=0;i<n;i++){

for(j=0;j<n;j++){

if(arr[i]>arr[j]){

cnt++;

}

}

if (cnt==(n-2))
{
      
   break; 
 
}

cnt = 0;

}

return arr[i];

}