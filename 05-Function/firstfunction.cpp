#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i =1; i<=x ; i++){
        f *= i;
    }
    return f;
}
main(){
    int n , r;
    cout<<"Enter a n :"<<endl;
    cin>>n;
    cout<<"Enter a r :"<<endl;
    cin>>r;
    int a=fact(n);
    int b =fact(n-r);
    cout<<a/b;
}