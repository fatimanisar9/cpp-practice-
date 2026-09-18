#include<iostream>
using namespace std;
main(){
      int arr[5];
      for(int i=0 ; i<5; i++){
        cout<<"Enter the number:";
        cin>>arr[i];
      }
      for(int i=4; i>=0;i--)
      cout<<arr[i];
}