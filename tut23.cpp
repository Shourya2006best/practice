#include<iostream>
using namespace std;

class shop{

    int itemid[50];
    int itemprice[50];
    static int itemno;
    public:
    
    void setprice();
    void displayprice();
    };    
    int shop::itemno; 

    void shop::setprice(){
        cout<<"enter the id of your item no. "<<itemno+1<<endl;
        cin>>itemid[itemno];
        cout<<"enter the price of your item no. "<<itemno+1<<endl;
        cin>>itemprice[itemno];
        itemno++;
    }
    void shop::displayprice(){

        for(int i=0;i<itemno;i++){
            cout<<"the price of your item with itemid "<<itemid[i]<<"is"<<itemprice[i]<<endl;
        }
    }
int main(){
    shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
return 0;
}