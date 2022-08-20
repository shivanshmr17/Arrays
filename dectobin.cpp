#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, i=0 ;
    int ans = 0, bit ;
    cout<<"Enter a number " ;
    cin>> n ;
    while(n!=0)
    {
         bit= n&1 ;
        ans = (bit* pow(10,i) )+ans ;
        n= n>>1 ;
        i++ ;
      
    }
    cout<<ans ;
    

}