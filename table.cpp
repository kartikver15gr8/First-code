#include<stdio.h>
int main(){
	int n;
	int i=0;
	printf("enter the value of n \n");
	scanf("%d", & n);
	do{
		printf("the multiplication table of %d is\n", n*i);
	}while(i<11);
	i++;
	return 0;
}
