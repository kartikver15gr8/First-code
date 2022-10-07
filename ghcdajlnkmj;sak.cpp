#include<iostream>
using namespace std;
int main(){
	int a=5;
	int* x=&a;
	
	cout<<"the address at which a is stored is "<<x<<endl;
	cout<<"the address at which a is stored is "<<&a<<endl;
	cout<<"the value in a is "<<*x<<endl;
	cout<<"the address of x is"<<&x;
	
	return 0;
	
}
