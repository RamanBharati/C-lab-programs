#include<stdio.h>
int main(){
	int i,j,k;
	int a[2][2]={1,2,3,4};
	int b[2][2]={4,3,2,1};
	int mul[2][2];
//	for(i=0;i<=2-1;i++){
//		for(j=0;j<=2-1;j++){
//			mul[i][j]=0;
//			for(k=0;k<2;k++){
//			mul[i][j]=mul[i][j]+arr1[i][k]*arr2[k][j];
//		}
//	}
//	}
for(i=0;i<2;i++)    
{    
	for(j=0;j<2;j++)    
	{    
//		mul[i][j]=0;    
		for(k=0;k<2;k++)    
		{    
			mul[i][j]+=a[i][k]*b[k][j];    
		}    
	}    
}    
	printf("1*2=");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
