#include<stdio.h>

main(){
	float c, f;
	
	printf("Enter the temperature in degree celsius : ");
	scanf("%f",&c);
	
	f = (c*1.8) + 32;
	
	printf("\nThe temperature in degree fahrenheit : %.2f",f);
}
