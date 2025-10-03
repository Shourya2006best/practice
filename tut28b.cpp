#include<iostream>
using namespace std;
class c2 ;

class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int x){
         val1=x;
    }
    void display(){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int x){
         val2=x;
    }
    void display(){
        cout<<val2<<endl;
    }
};
void exchange(c1 &x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 a;
    c2 b;
    a.indata(4);
    b.indata(6);
    exchange(a,b);
    cout<<"the value of val1 is  ";
    a.display();
    cout<<"the value of val2 is  ";
    b.display();

    
return 0;
}