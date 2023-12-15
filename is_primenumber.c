#include<stdio.h>
#include<stdbool.h>

bool is_prime();

bool is_prime(int num){


int count=0;

for (int i = 1; i <= num; i++)

{

    if (num % i==0)
    {
        count++;
    }
    
    
}

if(count==2){

    return true;

}

return false;

}
int main(){

int n,count=0;
printf("\nEnter Number you want to find prime numbers below it : ");
scanf("%d",&n);

for(int i=2;i<n;i++){

if( is_prime (i) == true){

    count++;

}

}

int prime_arr[count+1];
prime_arr[0]=1;

int x=1;

for (int i = 2; i < n; i++){

if( is_prime(i) == true){

prime_arr[x]=i;
x++;

}


}

printf("\nPrime Numbers below %d are : ",n);

for(int i = 0; i < count+1; i++)
{

printf(" %d  ",prime_arr[i]);    

}



}

