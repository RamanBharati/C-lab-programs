//WAP to create and display user defined MxN matrix 

#include<stdio.h>

int main(){
	
	int i,j,m,n,size1,size2,arr;
	printf("Enter the size of array: ");
	scanf("%d %d",&size1,&size2);
	
	
	printf("Enter the %d number of element in row",size1);
	for(i=0;i<size1;i++){
		scanf("%d",&m);
	}
	
	printf("Enter the %d number of element in column",size2);
	for(i=0;i<size2;i++){
		scanf("%d",&n);
	}
	
	for(i=0;i<size1;i++){
		for(j=0;j<size2;j++){
			printf("%d\t",[i][j]);
		}
	}
	
}
