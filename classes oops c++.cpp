#include<iostream>
using namespace std;
class employee{
	private:
		int a, b;
		
	public:	
		int c; int d;
		void setData(int a1, int b1);
		void getData(){
			cout<<"the value of a is"<<a<<endl;
			cout<<"the value of b is"<<b<<endl;
			cout<<"the value of c is"<<c<<endl;
			cout<<"the value of d is"<<d<<endl;
			
		}
};
	void employee :: setData(int a1,int b1){

	a=a1;
	b=b1;
}
int main(){
	employee rahul;
//	rahul.a=55 ----->> this will throw error since a is declared private here;
	rahul.d=457;
	rahul.c=458856445;
	rahul.setData(9,10);
	rahul.getData();
	
	
	
	return 0;
}
