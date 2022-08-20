#include<iostream>
using namespace std ;

int maxsum(int arr[] , int n){
        int cur = 0, max = 0;
        
        for(int i = 0 ;i<n ;i++)
        {
           cur = cur+arr[i] ;
           if(cur>max)
           {
               max =cur ;
           }
           if(cur<0)
           {
             cur = 0 ;
           }
        }
        return max ;
        }
        

int main()
{
    int a[7] =  {7,9 ,-8 ,-10,15,3,-4} ;
    int res =maxsum(a , 7);
    cout<<res; 
    return  0 ;
}