#include<iostream>
using namespace std;
int main(){
	int a=10;
	int* b=&a;
	cout<<"the address of a is"<<&a<<endl;
	cout<<"the address of a is"<<b<<endl;
	cout<<b<<endl;
	cout<<"the value stored at the address of b is "<<*b;
	return 0;
}
