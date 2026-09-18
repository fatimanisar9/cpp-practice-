#include<iostream>
using namespace std;
main(){
      int arr[5];
      int even =0 ,odd=0;
      for(int i=0 ; i<5; i++){
        cout<<"Enter the number:";
        cin>>arr[i];
      }
      for(int i=0; i<5 ;i++){
            if(arr[i]%2==0){
            even++;
            }
            else{
            odd++;
            }
      }
      cout<<"Count even number is: "<<even<<endl;
      cout<<"Count odd number is: "<<odd<<endl;
      
}