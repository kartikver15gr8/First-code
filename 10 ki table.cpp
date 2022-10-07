#include<stdio.h>
int main(){
	
	int i=0;
	scanf("%d", &i);
	
	do{
		printf("this is the table of 10\n", 10*i);
	}while(i<11);
	i++;
	return 0;
}
