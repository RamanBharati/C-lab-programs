#include<stdio.h>

int main(){
	int i,j,m,n;
	
	printf("enter the size of integer and floating point array less than 100\n");
	scanf("%d %d",&m,&n);
	int a[m];
	float b[n];
	
	printf("enter %d integer values:\n",m);
	for(i=0;i<m;i++){
		printf("\n a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter %d floating point values:\n",n);
	for(j=0;j<m;j++){
		printf("\n b[%d]",j);
		scanf("%f",&b[j]);
	}
	printf("enter 10 floating point values:\n");
	for(i=0;i<n;i++){
		printf("\n a[%d]is %d",i,a[i]);
	}
	printf("enter 10 floating point values:\n");
	for(j=0;j<n;j++){
		printf("\n b[%d]is %f",j,b[j]);
	}
	return 0;
}
