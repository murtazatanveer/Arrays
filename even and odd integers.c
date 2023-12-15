#include<stdio.h>
int main(){

int n,x=0,y=0;

printf("How many numbers you want to find even or odd number : ");

scanf("%d",&n);

int test[n];

for(int i=0;i<n;i++){

printf("\nEnter %d number : ",i+1);
scanf("%d",&test[i]);

    if (test[i]%2==0){

x++;

}

else{

y++;

}


}

int even[x];
int odd[y];
int a=0,b=0;

for(int i=0;i<n;i++){

if(test[i] % 2 == 0){

even[a] = test[i];
a++;

}

else{

odd[b] = test[i];
b++;

}


}


//even numbers 

printf("\nEven numbers are : ");
for(int i=0;i<x;i++){

printf("%d , ",&even[i]);

}

//odd numbers 
printf("\nOdd numbers are : ");

for(int i=0;i<y;i++){

printf("%d , ",&odd[i]);

}

}