#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	printf("enter the value of a\n");
	scanf("%f", &a);
	printf("enter the value of b\n");
	scanf("%f", &b);
	printf("enter the value of c\n");
	scanf("%f", &c);
	printf("enter the value of d\n");
	scanf("%f", &d);
	
	if(a>b&&a>c&&a>d){
		printf("a is the greatest number\n");
	}
	if(b>c&&b>d&&b>a){
		printf("b is the greatest number\n");
	}
	if(c>d&&c>a&&c>b){
		printf("c is the greatest number\n");
	}
	if(d>a&&d>b&&d>c){
		printf("d is the greatest number\n");
	}
	else{
		printf("no one number is greatest\n");
	}
	return 0;
}
