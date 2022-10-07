#include<stdio.h>
int main(){
	
	printf("$$ the multiplication table of 10 in reverse order is $$\n");
	for(int i=10;i;i--){
		printf("%d*10=%d\n",i,10*i);
	}
	return 0;
}
