#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number for table: ";
    cin>>n;
    for(int i=1 ; i<11 ; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}