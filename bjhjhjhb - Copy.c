#include<stdio.h>

int main(){
	
	int n,i,s;
	int found = 0;
	
	printf("Enter the size of array:\n ");
	scanf("%d",&n);
	int num[n];
	
	printf("Enter the number to be searched in the array: ");
	scanf("%d",&s);
	
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	
	for(i=0;i<n;i++){
		if(num[i] == s){
		printf("The element %d was found in index(%d)\n",s,i);
		found = 1;
		}
	}
	
	
	if(found == 0){
	printf("The element %d was not found",n);
	}
}
