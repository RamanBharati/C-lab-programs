#include<stdio.h>

int main(){
	int i,sum=0;
	float marks[5],percentage;
	
	for(i=0;i<5;i++){
		printf("\nenter the marks for sunject %d:",i+1);
		scanf("%f",&marks[i]);
	}
	for(i=0;i<5;i++){
		sum += marks[i];
	}
	percentage=((float)sum/500.0)*100;	
		printf("Percentage is: %.2f",percentage);
	return 0;	
}
