#include<bits/stdc++.h>
using namespace std;
const int N=2e6+5;
int n;
int a[N];
bool check(int mid)
{
	vector<int>cat;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i]>mid)cat.push_back(a[i]);
	}
	int si = cat.size();
	for(int i=0 ; i<si ; i+=2)
	{
		if(cat[i]!=cat[i+1])return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	int r = 0 , l=0;
	for(int i=0 ; i<n ; i++)cin >> a[i] , r = max(a[i] , r);
	int ans=0;
	while(l<=r)
	{
		int mid = r+(l-r)/2;
		if(check(mid))
		{
			ans = mid;
			r = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	cout << ans;
}
