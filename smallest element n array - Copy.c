#include<stdio.h>

int main(){
	int i,n;
	int sm;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the %d th element of an array:",i);
		scanf("%d",&arr[i]);
		
}	sm=arr[0];
	for(i=0;i<n;i++){
		if(sm>arr[i])
		sm=arr[i];
	}
	printf("the smallest element =%d",sm);
}
