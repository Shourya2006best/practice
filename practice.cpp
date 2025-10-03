#include<iostream>
 using namespace std;

 int sum_array(int *arr,int size){
	if(size==0)return 0;
	// if(size==1)return arr[0];

	return (arr[0]+sum_array(arr+1,size-1));
 }

int main(){

int arr[4]={1,2,3,0};
int sum=sum_array(arr,4);
cout<<sum;
cout<<endl<<endl;
	

return 0;

}
