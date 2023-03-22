#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    vector<int>lnds;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(!i)lnds.push_back(a[i]);
        else
        {
            if(a[i]>=lnds.back())lnds.push_back(a[i]);
            else
            {
                int idx = upper_bound(lnds.begin() , lnds.end() , a[i]) - lnds.begin();
                lnds[idx] = a[i]; 
            }
        }
    }
    cout << n - lnds.size();
}
