#include<stdio.h>
int main(){
	int i,j,m,n,sum=0;
	printf("enter number of rows\n");
	scanf("%d",&m);
	printf("enter number of column\n");
	scanf("%d",&n);
	int arr[m][n];
	printf("\nenter the elements of array\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("the %dx%d matrix is\n",m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("arr[%d][%d]=%d\t",i,j,arr[i][j]);
		}
			printf("\n\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=sum+arr[i][j];
		}
	}
	printf("sum is %d",sum);
}
