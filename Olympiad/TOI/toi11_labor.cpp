#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,o;
    cin >> n >> o;
    int nt[n];
    for(int i=0 ; i<n ; i++)cin >> nt[i];
    int l=1 , r=o*1e6 , mid , temp=0 , ans;
    while(l<=r)
    {
        mid = (l+r)/2;
        for(int i=0 ; i<n ; i++)temp += mid/nt[i];
        if(temp >= o)
        {
            r = mid-1;
            ans = mid;
        }
        else l = mid+1;
        temp = 0;
    }
    cout << ans;
}
