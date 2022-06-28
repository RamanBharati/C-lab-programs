#include<stdio.h>

int main(){
	int c,n;
	float f;
	printf("enter the nth c term:\n");
	scanf("%d",&n);
	printf("tempreature in Farenheight:\n");
	for(c=0;c<=n;c++){
		f=(float)c*9/5+32;
		printf(".2%f\t",f);
	}
	return 0;
}

