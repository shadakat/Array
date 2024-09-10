#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
 
 int arr[n],count;
 cout<<"enter the element in array"<<endl;
 for (int i=0; i<n; i++){
    cin>>arr[i];
 }
 for(int i=0; i<n; i++){
    if(arr[i]<0){
        count=count+1;
    }
 }
 cout<<count;
 return 0;
 }
 
