#include<stdio.h>
int main()

{
	
	int rating;
	printf("enter your rating from 1-5\n");
	scanf("%d", & rating);
	
	switch(rating){
		
		case 1:
			printf("rating is 1\n");
			break;
		case 2:
			printf("rating is 2\n");
			break;
			
		case 3:
			printf("rating is 3\n");
			break;
		case 4:
			printf("rating is 5\n");
			break;
		case 5:
			printf("rating is 5\n");
			break;
		default:
		    printf("the given rating is invald");
			break;	
			
	}
	return 0;
}
