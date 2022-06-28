//WAP to create, initialize and display 2x2 swaure matrix.

#include<stdio.h>

int main(){
	
	int i,j;
	int arr[2][2]={{2,6},{7,3}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d\t",arr[i][j]);
		
	}
	printf("\n");
		
	}
	return 0;
}
