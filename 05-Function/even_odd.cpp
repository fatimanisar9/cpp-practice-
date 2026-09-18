#include<iostream>
using namespace std;
void num(int n){
    if(n%2==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
}
main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    num(n);
}