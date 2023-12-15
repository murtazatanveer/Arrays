#include<stdio.h>
void rev();
int main(){

int num;
printf("\nHow many digits you want to reverse : ");
scanf("%d",&num);

int array[num];

printf("\nEnter Digits with space : ");

for (int i = 0; i < num; i++)
{
    scanf("%d",&array[i]);
}

rev(num,array);


}

void rev(int n , int arr[n]){

int temp,con;

if (n % 2 == 0 ){
// even 
    con = n / 2;
    
}

else{

// odd

con = (n-1) / 2;

}


for(int i=0;i<con;i++){

temp = arr[i];

arr[i] = arr[n-1-i];

arr[n-1-i] = temp;

}

printf("\nReverse : ");

for(int i=0;i<n;i++){


printf(" %d",arr[i]);

}


}