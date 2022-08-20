#include<iostream>

using namespace std ;

int main()
{
    int a[6]=  {1,0,0,1,0,1,} ;
    int i= 0  , j = 5 ;
        while(i<j)
        {
            if(a[i] == 0 )
            i++ ;
            else if(a[j] == 1)
            j-- ;
            else
            swap(a[i],a[j]) ;
        }
        for(i= 0 ;i<6 ;i++)
       {
        cout<<a[i] ;
       }
    return 0 ;

    }