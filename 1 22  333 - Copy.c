#include<stdio.h>

int main(){
	int i,j,n=5;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d\t",i);
		}
		printf("\n");
	}
}
