#include<stdio.h>

int main()

{
	int a;
	
	printf("enter the value of a\n");
	scanf("%d", & a);
	
	if(a>=18){
		printf("now you can apply for driving licence registration\n");
	
	}
	else{
		printf("you cannot apply for licence registration");
	}
	return 0;
	}

