#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,t;
    cin >> n >> t;
    int a[n],money[n],point[n];
    memset(money , 0 , sizeof(money));
    memset(point , 0 , sizeof(point));
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
        if(a[i]<0)
        {
            money[i] = money[i-1] + abs(a[i]);
            point[i] = point[i-1];
            if(i==0)money[i] = abs(a[i]) , point[i] = 0;
        }
        else
        {
            money[i] = money[i-1];
            point[i] = point[i-1] + (a[i]);
            if(i==0)money[i] = 0 , point[i] = abs(a[i]);
        }
    }
    while(t--)
    {
        int s , m;
        cin >> s >> m;
        int moneybefore=0;
        int startpoint=0;
        if(s>0)moneybefore = money[s-1] , startpoint = point[s-1];
        int ind = lower_bound(money+s , money+n , moneybefore+m) - money;
        if(ind==n)cout << point[n-1] - startpoint << '\n';
        else cout << point[ind] - startpoint << '\n';
    }
}
