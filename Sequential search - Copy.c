#include<stdio.h>

int main(){
int n,i;
int found = 0;
printf("Enter the number to be searched in the array: ");
scanf("%d",&n);

int arr[10] = {34,23,78,66,21,89,12,23,45,23};

printf("\n-----------------------------\n");
for(i=0;i<10;i++){
if(arr[i] == n){
printf("The element %d was found in index(%d)\n",n,i);
found = 1;
}
}

if(found == 0){
printf("The element %d was not found",n);
}
}
