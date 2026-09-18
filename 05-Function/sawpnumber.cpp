#include<iostream>
using namespace std;
void num(int &a ,int &b , int &c){
    int temp = a;
    a = c;
    c = temp;
}
main()
{
   int a , b , c;
   cout<<"Enter the number: ";
   cin>>a;
   cout<<"Enter the number: ";
   cin>>b;
   cout<<"Enter the number: ";
   cin>>c;
   cout<<"Before swaping: "<<a<<" "<<b<<" "<<c<<endl;
   num(a , b , c);
   cout<<"After swaping: "<<a<<" "<<b<<" "<<c;
}
