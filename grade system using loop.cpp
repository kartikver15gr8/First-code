#include<stdio.h>
int main(){
	float hindi,english,maths,physics,chemistry;
	float percentage;
	
	percentage= (hindi+english+maths+physics+chemistry)/5;
	
	printf("enter the marks in physics\n");
	scanf("%f", &physics);
	printf("enter the marks in maths\n");
	scanf("%f", &maths);
	printf("enter the marks in hindi\n");
	scanf("%f", &hindi);
	printf("enter the marks in english\n");
	scanf("%f", &english);
	printf("enter the marks in chemistry\n");
	scanf("%f", &chemistry);
	printf("the overall percentage of student is %f",percentage);
	
	if(percentage>=60){
		printf("the student scored first division");
	}
	
	if(percentage>=50 && percentage<=59 ){
		printf("the student scored second division");
	}
	if(percentage>=40 && percentage<=49){
		printf("the student scored third division");
	}
	if(percentage<40){
		printf("the student is fail ");
	}
	
	
	return 0;
}
