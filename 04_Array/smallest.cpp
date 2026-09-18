#include<iostream>
using namespace std;
main(){
      int arr[5];
      for(int i=0 ; i<5; i++){
        cout<<"Enter the number"<<i+1<<":";
        cin>>arr[i];
          }
          int s= INT16_MAX;
     for(int i=0 ; i<5; i++){
        if(arr[i]<s){
            s = arr[i];
        }
     }
     cout<<s;
}