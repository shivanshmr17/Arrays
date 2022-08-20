#include<iostream>
using namespace std ;

int main()
{
    int a[10] =  {7,9 ,8 ,10,15,3,4} ;
    int s = 0 , e = 6;
    int mid = (s+e)/2 ;
    while(s<e)
    {
        if(a[mid] >= a[0])
        s = mid+1 ;
        else
        e = mid ;
        mid = (s+e) /2 ;

    }

cout<<s ;
return  0 ;
}