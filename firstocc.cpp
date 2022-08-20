#include<iostream>
using namespace std ;

int main()
{
    int k  ;
    cout<<"enter the no  " ;
    cin>>k ;
    int a[10] =  {2,4,5,5,5,5,6,7,7} ;
    int s= 0 ;
    int e = 7 ;
    int ans ;
    int mid = (s + (e-s)/2) ;
    while(s<=e){
        if(a[mid]==k){
        ans = mid;
        e = mid -1 ;
    }
    else if(k > mid)
    {
      s = mid+1 ;
    }
    else{
    e = mid -1 ;
    }
    mid = (s + (e-s)/2) ;
    }
    cout<<"First occurence of the key is at index " <<ans ;
}
