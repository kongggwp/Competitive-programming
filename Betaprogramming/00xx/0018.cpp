#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0 , c=0 , prime[999];
    for(int i=2 ; i<1000 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            prime[c] = i ;
            c++;
        }
        count = 0 ;
    }
    int n , k , m , r[1001]={} , cr=0;
    cin >> n >> k ;
    for(int i=0 ; prime[i]<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(prime[i]*j<=n){
                 r[prime[i]*j]= 1; 
            }
            for(int m=2 ; m<=n ;m++)
            {
                if(r[m]==1)
                {
                    cr++;
                }
            }
            if(cr==k)
                {
                    cout << prime[i]*j;
                    break;
                }
            cr=0;
        }
        
    }
}
