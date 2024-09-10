#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n],index ,max,sec;
    max=0;
     cout<<"enter the element in array"<<endl;
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     for(int i=0; i<n;i++)
     {
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
        }
for(int i=0; i<n;i++){
    if(arr[i]>sec && i!=index){
        sec=arr[i];
    }
}
    cout<<sec<<" ";
     
return 0;
}