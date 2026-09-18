#include<iostream>
using namespace std;
main(){
      int arr[5] , sum=0;
      float avg;
      for(int i=0 ; i<5; i++){
        cout<<"Enter the marks"<<i+1<<":";
        cin>>arr[i];
          }
     for(int i=0 ; i<5; i++){
              sum +=arr[i];
              avg = sum/5.0;
     }
     cout<<avg;
}