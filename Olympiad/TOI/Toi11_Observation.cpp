#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>a(2001,vector<int>(2001));
vector<vector<int>>fs(2001,vector<int>(2001));
vector<vector<int>>fpat(2001,vector<int>(2001));
vector<vector<int>>ss(2001,vector<int>(2001));
vector<vector<int>>spat(2001,vector<int>(2001));
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m , n , k;
    cin >> m >> n >> k;
    for(int i=1 ; i<=m ; i++)
        for(int j=1 ; j<=n ; j++)
            cin >> a[i][j];
    for(int i=1 ; i<=m ; i++)
        for(int j=1 ; j<=n ; j++)
        {
            fs[i][j]    = fs[i-1][j] + fs[i][j-1] - fs[i-1][j-1] + a[i][j];
            fpat[i][j]  = fpat[i-1][j-1] + (fs[i][j] - fs[i-1][j]);
        }
    for(int i=1 ; i<=m ; i++)
        for(int j=n ; j>=1 ; j--)
        {
            ss[i][j]    = ss[i-1][j] + ss[i][j+1] - ss[i-1][j+1] + a[i][j];
            spat[i][j]  = spat[i-1][j+1] + (ss[i][j] - ss[i-1][j]);
        }
    int ans = INT_MIN;
    for(int i=k ; i<=m ; i++)
        for(int j=k ; j<=n ; j++)
            ans = max(ans , fpat[i][j] - (fs[i][j-k]-fs[i-k][j-k]) - fpat[i-k][j-k]);
    for(int i=k ; i<=m ; i++)
        for(int j=n-k+1 ; j>=1 ; j--)
            ans = max(ans , spat[i][j] - (ss[i][j+k]-ss[i-k][j+k]) - spat[i-k][j+k]);

    cout << ans;
}
