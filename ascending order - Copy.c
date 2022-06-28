#include<stdio.h>
int main(){
	int i,j,n,temp;
	
	printf("Enter the size of sorting array: ");
	
	scanf("%d",&n);
	
	int num[n];
	
	printf("Enter the elements of array: \n");
	
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	printf("\nthe elements before sorting array:\n ");
	for(i=0;i<n;i++){
		printf("\t%d",num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\nthe elements after sorting array:\n ");
	for(i=0;i<n;i++){
		printf("%d\t",num[i]);
	}
	return 0;
}
