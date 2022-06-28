#include<stdio.h>

int main(){
	int i,n=1,t;
	printf("enter the number of terms:\n");
		scanf("%d",&t);
	printf("the first %d terms of the series are:\n",t);
	for(i=1;i<=t;i++){
		printf("\t%d",n);
		n+=4;
	}
	return 0;
}
