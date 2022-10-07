#include<stdio.h>
int main(){
	
	int cost_price;
	int selling_price;
	float a;
	scanf("%f", & a);
	
	printf("enter the value of cost price\n");
	scanf("%d", & cost_price);
	printf("enter the value of selling price\n");
	scanf("%d", & selling_price);
	
	printf("the a is %f\n", a=selling_price-cost_price);
	if(a>0){
		printf("the seller has made a profit of %f\n", a);
	}else{
		printf("the seller has a loss of %f\n", a);
	}
	
	return 0;
	
}
