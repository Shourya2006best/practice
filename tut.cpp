#include<iostream>
using namespace std;

class better{
private:
    int a,b,c;
public:
   int d,e;
   void setdata(int a1,int b1,int c1);
   void getdata();
};

void better::setdata(int a1,int b1,int c1)
{
    a=a1;
     b=b1;
     c=c1;
}

void better::getdata()
{
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
    cout<<"the value of d is : "<<d<<endl;
    cout<<"the value of e is : "<<e<<endl;
}



int main(){
    better hello;
    hello.setdata(2,3,4);
    hello.d=5;
    hello.e=6;
    hello.getdata();  

return 0;
}
