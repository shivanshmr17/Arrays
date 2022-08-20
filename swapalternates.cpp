#include<iostream>
using namespace std ;

int main()
{
    int a[5] =  {2,4,5,6,7} ;
    int  i ;

    for(i = 0 ; i<4 ; i+=2)
    {
        swap(a[i], a[i+1]);
    }
for(i= 0 ;i<5 ;i++)
    {
        cout<<a[i] ;
    }
    return 0 ;
}