#include<iostream>
using namespace std;
void num(int n){
          bool prime = true;
          if(n<=1){
            prime = false;
          }
          for(int i=2 ; i<n; i++){
            if(n%i==0){
                prime = false;
                break;
          }
        }
          if(prime){
            cout<<"Prime number"<<endl;
          }
          else{
            cout<<"Not Prime number"<<endl;
          }
       
}
main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    num(n);
}