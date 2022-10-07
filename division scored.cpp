#include<stdio.h>
int main(){
	int hindi,english,maths,physics,chemistry;
	int percentage=(hindi + english + maths + physics + chemistry)/500*100;
	
	printf("enter the marks in physics\n");
	scanf("%d", &physics);
	printf("enter the marks in maths\n");
	scanf("%d", &maths);
	printf("enter the marks in hindi\n");
	scanf("%d", &hindi);
	printf("enter the marks in english\n");
	scanf("%d", &english);
	printf("enter the marks in chemistry\n");
	scanf("%d", &chemistry);
	printf("the overall percentage of student is %d\n",percentage);
	
	if(percentage>=60){
		printf("the student scored first division");
	}
	
	
	else if(percentage>=50 && percentage<=59 ){
		printf("the student scored second division");
	}
	else if(percentage>=40 && percentage<=49){
		printf("the student scored third division");
	}
	else if(percentage<40){
		printf("the student is fail ");
	}
	
	
	return 0;
}
