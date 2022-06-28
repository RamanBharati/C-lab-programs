#include<stdio.h>
int main(){
	int i,j,flag;
	int num[4]={39,15,48,13};
	printf("the elements before sorting the array:\n ");
	for(i=0;i<4;i++){
		printf("\t%d",num[i]);
	}
	for(i=0;i<4-1;i++){
		for(j=i+1;j<4;j++){
			if(num[i]>num[j]){
				flag=num[i];
				num[i]=num[j];
				num[j]=flag;
			}
		}
	}
	printf("\nthe elements after sorting array:\n ");
	for(i=0;i<4;i++){
		printf("\t%d",num[i]);
	}
	return 0;
}
