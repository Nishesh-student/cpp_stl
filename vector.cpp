#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    //capacity() --> it is used to print total space allocated for the elements 
    cout << "capacity -> " << v.capacity() << endl;
    //push_back() --> it is used to enter the element
    v.push_back(1);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(4);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(5);
    cout << "capacity -> " << v.capacity() << endl;
    //size() --> is used to return the total number of elements in a vector
    cout << "size-> " << v.size() << endl;
    //at() --> it is similar as array . It is used to print element at a particular index
    cout<<"\n The element at 2nd index is "<<v.at(2)<<endl;
    //front() and back() --> similar as array
    cout<<"\n The first element of vector is : "<<v.front();
    cout<<"\n The last element of vector is : "<<v.back();
    //pop_back() --> is removes the last element of vector
    cout<<"\n before pop_back";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    //pop_back() --> this function removes the last element from vector 
    v.pop_back();
    cout<<"\n after pop_back";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    //clear() --> isse size zero hoga par capacity utni hi rahegi
    cout<<"capacity before clear -- "<<v.capacity()<<endl;
    v.clear();
    cout<<"capacity after clear -- "<<v.capacity();
    cout<<"\n size after clear -- "<<v.size();
    //copying vector
    vector<int> b(5,1);//vector b of size 5 and all the elements are initialeze with 1
    vector<int> a(b);
    cout<<"\n printing a: \n";
    for(int i:a){
        cout<<" "<<i;
    }
    return 0;
}