#include<stdio.h>
int main(){
	
	int n,i,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int reverse[n];
	int arr[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\t%d",arr[i]);
	}
	for(i=0,j=n-1;i<n;i++,j--){
		reverse[i]=arr[j];
	}
	printf("\n");
	
	
	for(i=0;i<n;i++){
		printf("\t%d",reverse[i]);
	}	
return 0;	
}
