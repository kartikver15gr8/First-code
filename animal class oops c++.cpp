#include<iostream>
using namespace std;
class animal{
	
	
	public:
		int legs,claws;
		void getData(){
			cout<<"the number of legs of animal are "<<legs<<endl;
			cout<<"the number of claws of animal are "<<claws<<endl;
		}
};


int main(){
	animal tiger;
	tiger.claws=5;
	tiger.legs=4;
	tiger.getData();
	return 0;
	
}
