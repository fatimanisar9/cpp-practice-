#include<iostream>
using namespace std;
float rad(int r){
    float area;
     area = 3.1415*r*r;
     return area;
}
main()
{
   int r;
   cout<<"Enter the number: ";
   cin>>r;
   cout<<rad(r);
}
