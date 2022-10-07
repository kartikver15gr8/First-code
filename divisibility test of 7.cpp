#include<stdio.h>
int main()

{
	
	int num;
	
	printf("enter the number\n");
	scanf("%d", & num);
	
	if(num%7==0){
		
		printf("the number is divisible by 7\n");
		
	}
	else{
		printf("the number entered is not divisible by 7");
	}
	 return 0;
}
