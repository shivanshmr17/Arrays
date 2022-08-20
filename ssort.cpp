#include<iostream>
using namespace std ;

int main()
{
    int a[5] =  {3,5,4,7,6} ;
    int i;
    for(int i = 0 ;i<4 ;i++)
    {
         int minindex =i ;
        for(int j = i+1; j<5 ;j++)
       {
            if(a[j]<a[minindex])
            minindex= j ;
        }
       swap(a[minindex] , a[i]) ;
    }
    
    for(i = 0 ;i <5;i++){
        cout << a[i] ;
    }
}

   