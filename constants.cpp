#include<iostream>
#include<iomanip> //setw is defined here
using namespace std;
int main(){
    //const int a=3;
    //cout<<"the value of a was :"<<a<<endl;
//a=45; we get error as a is constant
  //  cout<<"the value of a is :"<<a<<endl;

  //MANUPLATORMANUPLATOR
  //int a=23,b=45,c=12345;
  // cout<<"The value of a is : "<<setw(5)<<a<<endl;
  //cout<<"The value of b is : "<<setw(5)<<b<<endl;
 //cout<<"The value of c is : "<<setw(5)<<c<<endl;

 // operator presendance
 int a=3, b=4;
 int c= ((((a*5)+b)-45)+87);
 cout<<" the value of c is "<<c;
return 0;
}
