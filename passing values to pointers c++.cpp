#include<iostream>
using namespace std;
int main(){
	int a=100;
	int* b=&a;
	int* c=&b;
	
	cout<<"the address of a is"<<&a<<endl;
	cout<<"the address of a is"<<b<<endl;
	cout<<"the value at the address of a is"<<*b<<endl;
	cout<<"the address of b is"<<&b<<endl;
	cout<<"the address of b is"<<c<<endl;
	cout<<"the value at the address of b is "<<*c<<endl;
//	cout<<"the value at the address of a is"<<**c;
	
	return 0;
}
