#include<iostream>
using namespace std;
int main(){
	
	int marks[10] = {99,5,88,66,45,65,25,896,45,2};
	
//    cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//	cout<<marks[4]<<endl;
//	cout<<marks[5]<<endl;
//	cout<<marks[6]<<endl;
//	cout<<marks[7]<<endl;
//	cout<<marks[8]<<endl;
//	cout<<marks[9]<<endl;
//	
//	for(int i=0;i<9;i++){
//		cout<<"the marks at "<<i<<" is "<<marks[i]<<endl;
//	}
	int i;
	do{
		cout<<"the marks at "<<i<<" is "<<marks[i]<<endl;
		i++;
	}
	while(i<9);

	
	return 0;
}
