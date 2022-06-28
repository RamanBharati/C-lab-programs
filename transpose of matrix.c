#include<stdio.h>
int main(){
	int arr[2][2]={1,2,3,4};
	int i,j;
	printf("the original matrix is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("arr[%d][%d]=%d\t",i,j,arr[i][j]);
		}
			printf("\n");
	}
	printf("the transpose is\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[j][i]);
		}
			printf("\n");
	}
	
}
