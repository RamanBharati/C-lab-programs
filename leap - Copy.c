#include<stdio.h>

int main(){
	
	int y;
	printf("enter a number year:\n");
	scanf("%d",&y);
	
	 (y % 4 == 0&& (y % 100!= 0 || y%400 == 0))
	 
		?printf("leap year")
		:printf("Not leap year");
	
	return 0;
}
