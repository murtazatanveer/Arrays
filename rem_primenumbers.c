#include<stdio.h>
#include<stdbool.h>

void prime_num_dlt();
bool is_prime();

int main(){

int num;
printf("\nHow many integers you want to check : ");
scanf("%d",&num);

int array[num];

prime_num_dlt(num,array);

}

void prime_num_dlt(int n,int arr[n]){

int size_ofprime=0,size_ofnprime=0;

printf("\nInput elements of array with spaces : ");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

for(int i =0;i<n;i++){

if ( is_prime(arr[i]) == false ){
    
size_ofnprime++;

}

size_ofprime++;

}

int prime[size_ofprime];
int not_prime[size_ofnprime];

int x=0,y=0;

printf("\nNon Prime Numbers are : ");
for(int i =0;i<n;i++){

if ( is_prime(arr[i]) == false ){
    
not_prime[x]=arr[i];
printf(" %d ",not_prime[x]);
x++;

}


}

printf("\n\nPrime Numbers are : ");

for(int i =0;i<n;i++){

if ( is_prime(arr[i]) == true ){
    
prime[y]=arr[i];
printf(" %d ",prime[y]);
y++;

}

}

}

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