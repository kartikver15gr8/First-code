#include<iostream>
using namespace std;
int main(){
	int ax[]={12,25,45,9,99};
	int* p=ax;
	
	cout<<"the value at ex[0]"<<*p<<endl;
	cout<<"the value at ex[1]"<<*(p+1)<<endl; 					
	cout<<"the value at ex[2]"<<*(p+2)<<endl;
	cout<<"the value at ex[3]"<<*(p+3)<<endl;
	cout<<"the value at ex[4]"<<*(p+4)<<endl;
	
	return 0;
	
}
