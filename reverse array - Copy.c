#include<stdio.h>
int main(){
	int arr[] = {15,4,4,54,57,87};
	int reverse[6],i,j;
	
	for(i=0;i<6;i++){
		printf("\t%d",arr[i]);
	}
	for(i=0,j=5;i<6;i++,j--){
		reverse[i]=arr[j];
	}
	printf("\n");
	
	
	for(i=0;i<6;i++){
		printf("\t%d",reverse[i]);
	}	
return 0;	
}
