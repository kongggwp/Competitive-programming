#include<bits/stdc++.h>
using namespace std;
int n;string s ,ss;
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;cin >> s;ss=s+s;
	for(int i=1 ; i<=n ; ++i)if(n%i==0 && ss.substr(i, n) == s)cout<<i,exit(0);
}
