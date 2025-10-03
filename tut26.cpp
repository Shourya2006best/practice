#include<iostream>
using namespace std;

class complex{
 int a;
 int b;
 public:
 void setdata(int v1,int v2){
    a=v1;
    b=v2;
 }
friend  complex setdatabysum(complex o1,complex o2);
 
 void printnumber(){
    cout<<"your complex number is"<<a<<"+"<<b<<"i"<<endl;
 }

};

complex setdatabysum(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
   return o3;
}

int main(){
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c3=setdatabysum(c1,c2);
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
return 0;
}