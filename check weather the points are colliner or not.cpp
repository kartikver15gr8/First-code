#include<stdio.h>
int main(){
	int x,y,X,Y,a,b;
	int A,B,C,Z;
	
	

	printf("enter the value of x\n");
	scanf("%d", &x);
	
	printf("enter the value of y\n");
	scanf("%d", &y);
	
	printf("enter the value of X\n");
	scanf("%d", &X);
	
	printf("enter the value of Y\n");
	scanf("%d", &Y);
	
	printf("enter the value of a\n");
	scanf("%d", &a);
	
	printf("enter the value of b\n");
	scanf("%d", &b);
	
	printf("the value of A is %d\n",x*Y-x*b);
	printf("the value of B is %d\n",X*b-X*y);
	printf("the value of C is %d\n",a*x-a*Y);
	printf("the value of Z is %d\n",A+B+C);
	
	if(Z=0){
		printf("the three coordinates lie on the same line");
	}
	else{
		printf("the three coordinates are not colliner");
	}

	return 0;
}
