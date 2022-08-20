#include<iostream>
#include<array>
using namespace std ;

int main(){
    array<int,3> a = {1,2,3} ;
    int size =a.size();
    cout<<size <<endl;
    for(int i = 0 ;i<size ;i++)
    cout<<a[i] <<endl ;
    cout<<"at second index "<<a.at(1) ;
}