#include<stdio.h>
int main(){
	int x;
	printf("enter the salary of person per annum\n");
	scanf("%d", &x);
	
	if(x>=250000 && x<=500000){
		printf("the tax paid by the person is 5 percent of its salary that is %d",(x*5)/100);
	}
	if(x>=500000 && x<=1000000){
		printf("the tax paid by the person is 20 percent of its salary that is %d",(x*20)/100);
	}
	if(x>=1000000){
		printf("the tax paid by the person is 30 percent of its salary that is %d",(x*30)/100);
	}
	if(x<250000){
		printf("the person doesn't need to pay any kind of income tax");
	}
	
	return 0;
}
