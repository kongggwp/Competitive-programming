#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    string day[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31} , d , m ,c=0;
    cin >> d >> m ;
    for(int i=0 ; i<m-1 ; i++)
    {
        c = c+month[i];
    }
    c = c + d + 2 ;
    cout << day[(c%7)];
    
}
