#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"enter the value of n"<<endl;
	
	cin>>n;
	
	if(n=0){
		
		cout<<"the number is even";
	}
	if(n%2!=0){
		
		cout<<"the number entered is odd ";
		
	}else{
		
		cout<<"the number is even";
		
	}
	
	return 0;
}
