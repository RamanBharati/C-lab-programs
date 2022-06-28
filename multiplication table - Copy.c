#include<stdio.h>

int main(){
		int i,n,m;
		printf("enter the positive number number:\n");
		scanf("%d",&n);
		printf("number multiplication table:\n");
		for(i=1;i<=10;i++){
			m=n*i;
			printf("\n%d*%d=%d",n,i,m);
		}
	}

	
