#include<stdio.h>
void element_search();

int main(){

int num;
printf("\nHow many elements you want in your array : ");
scanf("%d",&num);

int array[num];

printf("\nEnter %d Elements wit space : ",num);

for(int i=0;i<num;i++){

scanf("%d",&array[i]);

}

int element;

printf("\nWhich element you want to search : ");
scanf("%d",&element);

element_search(element,num,array);



}

void element_search(int ele, int n, int arr[n]){

int i;

for( i=0;i<n;i++){

if(arr[i]==ele){

break;

}

}

if(arr[i]==ele){


printf("\n%d Found at Position : %d (Index : %d)",ele,i+1,i);

}

else{

    printf("\n%d Not Found",ele);
    
}

}