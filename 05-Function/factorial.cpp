#include<iostream>
using namespace std;
int num(int n){
    int f = 1;
    for(int i=1 ; i<=n ; i++){
        f *= i;
    }
    return f;
}
main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<num(n);
}