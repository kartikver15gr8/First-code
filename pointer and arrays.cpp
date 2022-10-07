#include<iostream>
using namespace std;
int main(){
	int marks[5]={54,25,36,78,95};
	int* p=marks;
	cout<<"the value at marks[0] is "<<*p<<endl;	      //using pointers to call values stored in array
	cout<<"the value at marks[1] is "<<*(p+1)<<endl;      //and also derefrencing pointer using i+1
	cout<<"the value at marks[2] is "<<*(p+2)<<endl;
	cout<<"the value at marks[3] is "<<*(p+3)<<endl;
	cout<<"the value at marks[4] is "<<*(p+4)<<endl;
	
	return 0;
}
