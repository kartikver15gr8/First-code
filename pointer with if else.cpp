#include<iostream>
using namespace std;
int main(){
	int a;
	int* b=&a;
	
	cout<<"enter the value of a"<<endl;
	cin>>a;
	
	if(a==2){
		cout<<"the address of a is"<<b;
	}
	else if(a==10){
		cout<<"the value stored at the address of"<<*b;
	}
	
	
	return 0;
}
