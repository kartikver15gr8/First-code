#include<stdio.h>
int main()
{
    float x;
	printf("enter the value of x\n");
	scanf("%f", & x );
	
	if(x<100&&x>90){
		printf("your grade is A\n");
	}
	else if(x<90&&x>80){
		printf("your grade is B\n");
	}
	else if(x<80&&x>70){
		printf("your grade is C\n");
	}
	else if(x<70&&x>60){
		printf("your grade is D\n");
	}
	else if(x<60&&x>50){
		printf("your grade is E\n");
	}
	
	else{
	
	printf("your grade is too low");
}
return 0;
}
