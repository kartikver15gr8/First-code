#include<iostream>
using namespace std;
int main(){
	int shyam,raju,baburao;
	cout<<"enter the age of shyam"<<endl;
	cin>>shyam;
	cout<<"enter the age of raju"<<endl;
	cin>>raju;
	cout<<"enter the age of baburao"<<endl;
	cin>>baburao;
	
	if(shyam>raju && shyam>baburao){
		cout<<"shyam is oldest"<<endl;
	}
	if(shyam<raju && raju>baburao){
		cout<<"raju is oldest"<<endl;
	}
	if(baburao>raju && shyam<baburao){
		cout<<"baburao is oldest"<<endl;
	}
	return 0;
}
