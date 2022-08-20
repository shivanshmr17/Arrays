#include<iostream>

using namespace std ;

int main()
{
    int a[6]=  {2,4,5,6,6,7} ;
    int b[4] ={5,6} ;
    int ans[5] ;
    int  k = 0 , p;

    int  i = 0 , j= 0  ;
   while(i<6 && j<2)
    {
        if(a[i]<b[j]){
		
        i++ ;
        }
        else if(a[i]>b[j]){
	    j++ ;
		}
        else{
        ans[k++] = a[i] ;
        i++;
        j++;
       }
    }
        for ( p = 0 ; p<2 ; p++)
        {
            cout<<ans[p] ;
        } 

    }