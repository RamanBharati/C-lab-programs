#include<stdio.h>
int main(){
	int i,j,m,n;
	
	RE:
	printf("enter the no of row of the matrix: \n");
	scanf("%d",&m);
	printf("enter the no of column of the matrix: \n");
	scanf("%d",&n);
	int arr[m][n];
	if(m!=2 && n!=2 || m!=n){
		printf("The matrix is not 2x2 matrix\n");
		printf("Please re-enter\n");
		printf("--------------------------------\n");
		goto RE;
	}
	printf("------------------------------------\n");
	
	printf("Enter the matrix elements\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
			printf("\n");
	}
	
	printf("------------------------------------\n");
	printf("the original matrix is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
			printf("\n");
	}
	printf("------------------------------------\n");
	printf("the transpose is\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",arr[j][i]);
		}
			printf("\n");
	}
	
}
