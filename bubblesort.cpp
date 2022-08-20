#include<iostream>
using namespace std ;

int main()
{
    int a[5] =  {3,5,4,7,6} ;
    int i;
    for(int i = 1 ;i<5 ;i++)
    {
        for(int j =0 ;j < 5-i ;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]) ;
            }
        }
    }
        for(i = 0 ;i <5;i++){
        cout << a[i] ;
        }
    }