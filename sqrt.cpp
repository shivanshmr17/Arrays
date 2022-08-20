#include<iostream>
using namespace std ;

int sqrtno(int k)
{
   int s = 0 , e = k ;
   int mid = (s+(e-s)/2) ;
   

   while(s<=e)
   {
    long long int square = mid*mid ;
    if(square < k){
    
    s = mid+1 ;}
    else if(square >k)
    e = mid-1 ;
    else
    return mid ;
    mid = (e+(s-e)/2);
   }
   return mid ;
}
int perfectans(int tempsol , int n , int uptodec)
{
    double factor = 1 ;
    double ans  = tempsol ;
    
    for(int i = 0  ;i<uptodec ; i++){
    factor =factor/10;
    for(double j = ans ; j*j <n ; j= j+factor){
    ans  = j;
    }
    }
   return ans ;

}
int main()
{
    int n ;
    cout<<"Enter a number " ;
    cin>>n ;
    //cout<<"Sqrt of the no is " << sqrtno(n) ;
    int tempsol = sqrtno(n);
    cout<<"Perfect ans " <<perfectans(tempsol, n , 3);
    return  0;
}