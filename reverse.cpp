#include<iostream>
using namespace std ;

int main()
{
    int a[5] =  {2,4,5,6,7} ;
   
    int i,t ;
    for(i = 0 ;i<2 ;i++){
    swap(a[i],a[5-i-1]) ;
    }
    for(i= 0 ;i<5 ;i++)
    {
        cout<<a[i] ;
    }
    return 0 ;
}