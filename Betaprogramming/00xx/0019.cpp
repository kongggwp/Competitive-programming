#include <bits/stdc++.h>
using namespace std;
int s[10] , b[10] , least=999999 , n;
void perket(int i , int stemp , int btemp)
{
    if(i==n)
    {
        if(btemp>0 && abs(stemp-btemp)<least)
        least = abs(stemp-btemp);
    }
    else{
        perket(i+1,stemp,btemp);
        perket(i+1,stemp*s[i],btemp+b[i]);
    }
}
    
int main() {
    cin >> n;
    for(int i=0 ; i<n ; i++)cin >> s[i] >> b[i];
    perket(0,1,0);
    cout << least;
}
