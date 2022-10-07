#include<stdio.h>
int main()
{
	float pi=3.14;
	float r;
	float h;
	printf("enter the value of r\n");
	scanf("%f", &r);
	printf("the area of this circle  is%f", pi*r*r);
	printf("enter the value of h\n");
	scanf("%f", &h);
	printf("the volume of the given cylinder is%f", pi*r*r*h);
	
	return 0;
} 
