#include<stdio.h>
int main(){

int a=10;

int* ptr;

ptr =& a;

int* ptr_second;

ptr_second=&a;

printf("\nptr : %d\nptr_second : %d",*ptr,*ptr_second);

// MODIFYING

*ptr = a+5;

printf("\nAfter Modifying\n");

printf("\nptr : %d\nptr_second : %d",*ptr,*ptr_second);

// initilize array

char ch[5]="moon";

char *ch_ptr=ch;



printf("\nValues of char array using ch_ptr are : ");

for(int i=0;i<5;i++){

printf(" %c ",*ch_ptr);

ch_ptr++;

}

printf("\n\nEnter Length of your array :");

int n;
scanf("%d",&n);

char arr[n];
printf("\nEnter String : ");
scanf("%s",&arr);

char *arr_ptr=arr;

printf("\nYour String using char ptr is : ");

while(*arr_ptr != '\0'){

printf("%c",*arr_ptr);

arr_ptr++;

}

}