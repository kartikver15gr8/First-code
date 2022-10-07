#include<stdio.h>
float average();

int main(){
int a,b,c;
float x;
scanf("%f", &x);
   printf("enter the value of a\n");
   scanf("%d", &a);
   printf("enter the value of b\n");
   scanf("%d", &b);
   printf("enter the value of c\n");
   scanf("%d", &c);
   x=(a+b+c)/3;
   return 0;
}
float average(){
	printf("the average of a b c is %f\n",x);
	x=(a+b+c)/3;
}
