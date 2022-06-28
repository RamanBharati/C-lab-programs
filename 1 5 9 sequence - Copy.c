#include<stdio.h>

int main(){
	int i,n=1;
	printf("the first 10 terms of the series are:\n");
	for(i=1;i<=10;i++){
		printf("\t%d",n);
		n+=4;
	}
	return 0;
}
