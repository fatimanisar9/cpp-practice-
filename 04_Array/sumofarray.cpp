#include<iostream>
using namespace std;
main(){
      int arr[5] , sum=0;
      for(int i=0 ; i<5; i++){
        cout<<"Enter the marks"<<i+1<<":";
        cin>>arr[i];
          }
     for(int i=0 ; i<5; i++){
              sum += arr[i];
     }
     cout<<sum;
}