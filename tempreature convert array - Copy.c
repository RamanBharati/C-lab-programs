#include<stdio.h>

int main(){
float arr[4],farr[4];
int i;

for(i=0;i<4;i++){
printf("Enter Celcius %d: ",i+1);
scanf("%f",&arr[i]);
}

for(i=0;i<4;i++){
farr[i] = ((arr[i] * 9) / 5) + 32.0;
}

printf("\n---------------------------------------\n");

for(i=0;i<4;i++){
printf("%.2f Celcius = %.2f Fahrenheit\n",arr[i],farr[i]);
}


}
