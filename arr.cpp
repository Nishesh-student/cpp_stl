#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){
    array<int,5> arr={1,2,3,4,5};
    //size --> it returns the size of array
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    //at(index) --> it rertuns the element at given index 
    cout<<"\n The element at 2nd index is -> "<<arr.at(2);
    //empty() --> it return boolen value whether the array is empty or not
    cout<<"\n The array is -> "<<arr.empty();
    //front() --> it returns the first element of array 
    cout<<"\n The first element is : "<<arr.front();
    //back() --> it returns the last element of array
    cout<<"\n The last element of array is : "<<arr.back();
    
    return 0;
}