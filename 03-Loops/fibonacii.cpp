#include<iostream>
using namespace std;
main(){
    int n,a=0,b=1, c;
    cout<<"Enter the number :";
    cin>>n;
    cout<<a<<" "<<b;
    for(int i=3 ; i<=n; i++){
        c=a+b;
        cout<<" "<<c<<" ";
        a=b;
        b=c;
    }
}