#include<stdio.h>
int main()
{
	int p,c,m,t;
	printf("enter the marks of p\n");
	scanf("%d", &p);
	printf("enter the marks of c\n");
	scanf("%d", &c);
	printf("enter the marks of m\n");
	scanf("%d", &m);
	
	t=(p+c+m)/3;
	printf("the grand total percentage is %d\n", t);
	
	if(p>=33 || c>=33 || m>=33 || t>=40)
	{
		printf("the student has passed his or her examination");
	}
	
	else{
		printf("the student fails");
		
	}
	return 0;
}

