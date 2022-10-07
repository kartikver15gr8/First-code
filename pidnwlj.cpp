#include<iostream>
using namespace std;
int main(){

	int mark[]={12,25,35,79,99};
	
	int *ptr;
	ptr=mark;
	cout<<"the value at mark[0] is "<<mark[0]<<endl;
	cout<<"the value at mark[1] is "<<mark[1]<<endl;
	cout<<"the value at mark[2] is "<<mark[2]<<endl;
	cout<<"the value at mark[3] is "<<mark[3]<<endl;
	cout<<"the value at mark[4] is "<<mark[4]<<endl;
	cout<<"address of mark[2] is "<<ptr<<endl;
	cout<<"the value at mark[2] is "<<*ptr<<endl;
	return 0;
}
