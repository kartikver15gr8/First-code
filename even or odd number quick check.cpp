#include<stdio.h>
int main(){
	int i;
	printf("enter the value of i\n");
    scanf("%d", & i);
    if(i%2==0){
    	printf("the number entered is even\n");
	}else{
		printf("the number entered id odd");
	}
	return 0;
}
