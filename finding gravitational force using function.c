#include<stdio.h>
float force();

int main(){
	float m,r,result;
	printf("enter the value of m\n");
	scanf("%f", &m);
	printf("enter the value of r\n");
	scanf("%f", &r);
	
	result = (0.0000000000667*m)/(r*r);
	printf("the gravitational force is %f\n", result);
	return 0;
}
	


