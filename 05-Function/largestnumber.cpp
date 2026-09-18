#include<iostream>
using namespace std;
int num(int a, int b ,int c ,int d){
    int max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    if(d>max){
        max = d;
    }
    return max;
}
main(){
    int x ,y ,z,a;
        cout<<"Enter the number: ";
        cin>>x>>y>>z>>a;
    cout<<num(x ,y ,z, a);
}