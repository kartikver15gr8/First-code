#include<stdio.h>
int main(){
	int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for(int i=0; i<11; i++){
    	printf("%d*i= %d\n", n,n*i);
	}
	return 0;
}
