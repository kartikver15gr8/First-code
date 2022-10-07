#include<iostream>
using namespace std;
int main(){
	int a=10;
	int* b=&a;
	cout<<"the address of a is "<<b<<endl;
	cout<<"the value at the address of a is"<<*b;
	return 0;
}
