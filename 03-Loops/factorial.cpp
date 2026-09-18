#include<iostream>
using namespace std;
main(){
    int n;
    int fact =1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        fact *= i;
    }
    cout<<fact<<endl;
}