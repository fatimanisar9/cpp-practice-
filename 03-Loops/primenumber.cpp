#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    bool prime = true;
    if(n<=1){
        prime = false;
    }
    for(int i=2 ; i<n ; i++){
            if(n%i==0){
                prime = false;
                break;
            }
        }
    if(prime){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not prime number"<<endl;
    }
}