#include<stdio.h>
#include<math.h>
int area();

int main(){
	int area,a;
//	scanf("%d",area);
//	scanf("%d",a);
printf("enter the value of a\n");
scanf("%d",&a);
area = a*a;
printf("the area of squaric feild is %f",pow(a,2));

		

	return 0;
}

