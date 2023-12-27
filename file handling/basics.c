#include<stdio.h>
int main(){

char str[8];
 printf("\nEnter uni name : ");
scanf("%8s",str);

FILE *f_ptr;

f_ptr = fopen("intro.txt","w");

fprintf(f_ptr,"MY NAME IS MURTAZA TANVEER");

fprintf(f_ptr,"\n%s",str);


fclose(f_ptr);

printf("\nData written");



}