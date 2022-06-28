#include<stdio.h>

int main(){

int n;
printf("Enter the size of array: ");
scanf("%d",&n);

int arr[n],i;

for(i=0;i<n;i++){
printf("Element(%d): ",i+1);
scanf("%d",&arr[i]);
}

int lg = arr[0];

for(i=0;i<n;i++){
if(arr[i] > lg){
lg = arr[i];
}
}

printf("\nThe largest: %d",lg);
}
