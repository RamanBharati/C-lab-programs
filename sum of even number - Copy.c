#include<stdio.h>

int main(){
		int i,n,sum=0;
		printf("enter the number of even number:\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			if(i%2==0){
				
				sum+=i;
				
			}
		}
		printf("\n%d",sum);
		return 0;
	}
