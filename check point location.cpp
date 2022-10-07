#include<stdio.h>
int main(){
	int x,y;
	
	printf("enter the value of x\n");
	scanf("%d", &x);
	printf("enter the value of y\n");
	scanf("%d", &y);
	
	
	
	if(x==0 && y!=0){
		printf("the coordinate lies on y axis\n");
	}
	if(y==0 && x!=0){
		printf("the coordinate lies on x axis\n");
	}
	if(x==0 && y==0){
		printf("the coordinate is at origin or we can say that the point u entered is origin");	
	}
	if(x!=0 && y!=0){
		printf("the point is does't lie on axes or on origin");
	}
	
	
	
	return 0;
}
