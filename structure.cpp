#include<iostream>
using namespace std;
struct employee
{
    int eID;
    char favchar;
    float per_annum_salary;
    
};
int main(){
    employee kartikey_verma;
    kartikey_verma.eID=201038;
    kartikey_verma.favchar='a';
    kartikey_verma.per_annum_salary=12000000;
    
    cout<<"kartikey's id is "<< kartikey_verma.eID<<endl;
    cout<<"kartikey's favcar is "<< kartikey_verma.favchar<<endl;
    cout<<"kartikey's per annum salary is"<<kartikey_verma.per_annum_salary<<endl;
    return 0;
}
