#include<stdio.h>
int main(){
	int h,t;
	float c;
	printf("enter the value of h\n");
	printf("enter the value of c\n");
	printf("enter the value of t\n");
	scanf("%d", & h);
	scanf("%f", & c);
	scanf("%d", & t);
	if(h>50&&c<0.7&&t>5600){
		printf("grade is 10\n");
	}else if(h>50&&c<0.7&&t<=5600){
		printf("grade is 9\n");
	}else if(h<=50&&c<0.7&&t>5600){
		printf("grade is 8\n");
	}else if(h>50&&c>=0.7&&t>5600){
		printf("grade is 7\n");
	}else if(h>50||c<0.7||t>5600){
		printf("grade is 6\n");
	}else{
		printf("grade is 5\n");
	}
	return 0;
}
