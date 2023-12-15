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