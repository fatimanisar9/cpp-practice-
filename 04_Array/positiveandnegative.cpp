#include<iostream>
using namespace std;
main(){
    int arr[5];
    int p=0 , n=0;
    for(int i=0; i<5;i++){
        cout<<"Enter the number: ";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        if(arr[i]>=0){
            p++;
        }
        else{
            n++;
        }
    }
    cout<<"Count the positive number: "<<p<<endl;
    cout<<"Count the negative number: "<<n<<endl;


}