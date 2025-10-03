#include<iostream>
using namespace std;
class complex;

class calculator{
    public:
    int sumrealcomplex(complex ,complex );
};

class complex{
 int a;
 int b;
 friend int calculator::sumrealcomplex(complex ,complex );
 //or
 //make the whole calculator as a friend
 //-->friend class calculator;
 //every function in calculator can acces the private data of complex class
 public:
 void setdata(int v1,int v2){
    a=v1;
    b=v2;
 }
 void printnumber(){
    cout<<"your complex number is"<<a<<"+"<<b<<"i"<<endl;
 }

};

int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a + o2.a);
    }


int main(){
    complex c1,c2;
    c1.setdata(2,3);
    c2.setdata(4,5);
    calculator calc;
    int sum=calc.sumrealcomplex(c1,c2);
    cout<<"the sum of real part is"<<sum<<endl;
return 0;
}