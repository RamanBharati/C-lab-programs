#include<stdio.h>

int main(){
	int a[10],i,j;
	float b[10];
	printf("enter 10 integer values:\n");
	for(i=0;i<10;i++){
		printf("\n a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter 10 floating point values:\n");
	for(j=0;j<10;j++){
		printf("\n b[%d]",j);
		scanf("%f",&b[j]);
	}
	printf("enter 10 floating point values:\n");
	for(i=0;i<10;i++){
		printf("\n a[%d]is %d",i,a[i]);
	}
	printf("enter 10 floating point values:\n");
	for(j=0;j<10;j++){
		printf("\n b[%d]is %f",j,b[j]);
	}
	return 0;
}
