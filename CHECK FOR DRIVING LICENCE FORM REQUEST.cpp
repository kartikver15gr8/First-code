#include<iostream>
using namespace std;
int main(){
	int age;
    cout<<"APPLICATION FOR DRIVING LICENCE"<<endl;
	cout<<"enter your age"<<endl;
	cin>>age;
	if(age<18){
		cout<<"you are not eligible for the application form for driving licence"<<endl;
		
	}else if(age>18){
		cout<<"you are eligible for the application form for driving licence";
	}
	return 0;
	
}
