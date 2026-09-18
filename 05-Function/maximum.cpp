#include<iostream>
using namespace std;
int num(int arr[] ,int size){
    int max = INT16_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
main()
{
   int arr[5];
   for(int i=0 ; i<5; i++){
    cout<<"Enter the number: ";
    cin>>arr[i];
   }
   cout<<num(arr , 5);
}
