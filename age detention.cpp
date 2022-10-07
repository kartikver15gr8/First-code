#include<stdio.h>
int main(){
	
	int ram;
	int jai;
	int viru;
	 
	
	printf("enter the age of ram\n");
	scanf("%d", &ram);
	printf("enter the age of jai\n");
	scanf("%d", & jai);
	printf("enter the age of viru\n");
	scanf("%d", & viru);
	
	if((ram>jai)&&(ram>viru)){
		
		printf("ram is oldest\n");
	}
	
		if((jai>ram)&&(jai>viru))
		{
			printf("jai is the oldest one\n");
		}
		else{
			printf("viru is oldest");
		}
	return 0;
}
