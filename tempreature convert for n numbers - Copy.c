#include<stdio.h>

int main(){

int i,n;
printf("Enter the number of conversions: ");
	scanf("%d",&n);
	float arr[n],farr[n];
for(i=0;i<n;i++){
printf("Enter Celcius %d: ",i+1);
scanf("%f",&arr[i]);
}

for(i=0;i<n;i++){
farr[i] = ((arr[i] * 9) / 5) + 32.0;
}

printf("\n---------------------------------------\n");

for(i=0;i<n;i++){
printf("%.2f Celcius = %.2f Fahrenheit\n",arr[i],farr[i]);
}


}
