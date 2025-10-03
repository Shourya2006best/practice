#include<iostream>
using namespace std;

class binary
{
 string s;
 public: 
 void read(void);
 void check();
 void display();
 void ones_compliment();
 
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
    }

int main(){
    binary b;
    b.read();
    
    
return 0;
}