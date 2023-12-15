#include<stdio.h>
void rev();

int main(){

int num;
printf("\nHow many characters are there in your string : ");
scanf("%d",&num);

char str[num+1];

printf("\nEnter String : ");

scanf("%s",&str);


rev(num,str);


}

void rev(int n , char str[n+1]){

int con;
char temp;

if((n+1) % 2 == 0 ){

con = ((n+1) - 2 ) / 2;


}
else{

con = ((n+1) - 1) / 2;

}

for (int i = 0; i<con; i++){
    
    temp = str[i];

    str[i] = str[n-1-i];

    str[n-1-i] = temp;

}



printf("\nReverse : %s",str);


}