#include<stdio.h>

void merge();

int main(){

    int a1;
    printf("\nEnter no of characters in string 1 : ");
    scanf("%d",&a1);

char a[a1+1];
printf("\nEnter String 1 : ");
scanf("%s",&a);

    int b1;
    printf("\nEnter no of characters in string 2 : ");
    scanf("%d",&b1);
    
char b[b1+1];
printf("\nEnter String 2 : ");
scanf("%s",&b);


merge(a1,b1,a,b);


}

void merge(int a1 , int b1 , char a[a1+1] , char b[b1+1] ){

char c[a1+b1+1];

for(int i=0;i<a1;i++){

 c[i]=a[i];

}
int x=0;

for(int i=a1;i<(a1+b1+1);i++){

c[i]=b[x];
x++;

}

printf("\nAfter Merging : %s",c);


}