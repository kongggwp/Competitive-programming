#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int a[200005];
int n;
int lisr[200005] , lisl[200005];
void solve()
{
    vector<int>lis;
    int sz=1;
    lisl[0] = 1;
    for(int i=0 ; i<n ; i++)
    {
        if(!i)lis.push_back(a[i]);
        else
        {
            if(a[i]>lis.back())
            {
                lisl[i] = ++sz;
                lis.push_back(a[i]);
            }
            else
            {
                int idx = lower_bound(lis.begin() , lis.end() , a[i]) - lis.begin();
                lis[idx] = a[i]; 
                lisl[i] = idx+1;
            }
        }
    }
    lis.clear();
    sz=1;
    lisr[n-1] = 1;
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(i==n-1)lis.push_back(a[i]);
        else
        {
            if(a[i]>lis.back())
            {
                lisr[i] = ++sz;
                lis.push_back(a[i]);
            }
            else
            {
                int idx = lower_bound(lis.begin() , lis.end() , a[i]) - lis.begin();
                lis[idx] = a[i]; 
                lisr[i] = idx+1;
            }
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> n >> t;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    solve();
    while(t--)
    {
        int x;
        cin >> x;
        cout << min(lisl[x]-1 , lisr[x]-1) << endl;
    }
}
