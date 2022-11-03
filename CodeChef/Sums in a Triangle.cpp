#include <bits/stdc++.h>
using namespace std;
int a[200][200] , x;
int f(int i , int j, vector<vector<int>>&dp){
    if(i == x-1){
        return a[x-1][j];
    }
    if(dp[i][j] != -1) return dp[i][j];
    int down = a[i][j] + f(i+1 , j, dp);
    int diag = a[i][j] + f(i+1 , j+1, dp);
    return dp[i][j] = max(down, diag);
}
int main()
{
    int n;
    cin >> n;
    for(int i=  0 ; i<n ; i++)
    {
        cin >> x;
        vector<vector<int>>dp(x, vector<int>(x, -1));
        for(int j=0 ; j<x ; j++)
        {
            for(int k=0 ; k<=j ; k++)
            {
                cin >> a[j][k];
            }
        }
        cout<<f(0,0, dp)<<endl;
    }
}
