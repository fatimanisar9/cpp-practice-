#include<iostream>
using namespace std;
main(){
    int arr[5];
    int key;
    bool found = false;
    for(int i=0; i<5;i++){
        cout<<"Enter the number: ";
        cin>>arr[i];
    }
    cout<<"Enter the key search: ";
    cin>>key;
  for(int i=0; i<5;i++){
         if(arr[i]==key){
          found= true;
         }
        
    }
    if(found){
             cout<<"Key is found"<<endl;
        }
        else{
            cout<<"Key is not found"<<endl;
        }
}