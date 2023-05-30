#include<bits/stdc++.h>
using namespace std;
#define int long long int
int dp[305][305][10] , n , k , d , a[305] , x;
const int mod = 1e9+7;
int32_t main()
{
    cin >> n >> k >> d;
    for(int i=1 ; i<=n ; i++)cin >> x , a[i] = a[i-1] + x;
    for(int i=1 ; i<=n ; i++)for(int j=i ; j<=n ; j++)dp[i][j][1] = 1;
    for(int lv = 2  ; lv<=k ; lv++)
        for(int i=n ; i>=1 ; i--)
            for(int j=i+1 ; j<=n ; j++)
                for(int k=i ; k<j ; k++)
                    if(abs((a[k]-a[i-1])-(a[j]-a[k])) <=d)
                        dp[i][j][lv] += (dp[i][k][lv-1] * dp[k+1][j][lv-1])%mod , dp[i][j][lv]%=mod;
    cout << dp[1][n][k]%mod;
}
