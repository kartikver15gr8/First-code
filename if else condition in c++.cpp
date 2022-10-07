#include<iostream>
using namespace std;
int main(){
	int age;
	
	cout<<"tell me your age"<<endl;
	cin>>age;
	
	
	
	if(age<18 && age>0){
		cout<<"sorry but you are too younger to join my party so u can not come in my party"<<endl;
	}
	else if(age==18){
		cout<<"you may come in my party in the kids section"<<endl;
	}
	else if(age>18){
		cout<<"heyy buddy welcome to my party";
	}
	else if(age<1){
		cout<<"u re not yet born";
	}
	
	
	
	return 0;
}
