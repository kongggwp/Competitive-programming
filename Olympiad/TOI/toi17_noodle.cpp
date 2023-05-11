#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
#define endl '\n';
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int n , m , k , a[100005] , l=0 , r=0;
bool check(int maxi)
{
	priority_queue<int , vector<int> , greater<int>>pq;
	int sum = 0 , cnt=0;
	for(int i=0 ; i<n ; i++)
	{
		sum+=a[i];
		pq.push(a[i]);
		if(pq.size()>k)
		{
			sum-=pq.top();
			pq.pop();
		}
		if(sum>=maxi && pq.size()==k)
		{
			cnt++;
			while(!pq.empty())pq.pop();
			sum=0;
		}
	}
	return cnt>=m;
}
int32_t main()
{
	//freopen("file.in" , "r" , stdin);freopen("file.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> m >> k;
	for(int i=0 ; i<n ; i++)
	{
		cin >> a[i] , r+=a[i];
	}
	while(l<=r)
	{
		int mid = l+(r-l)/2;
		if(check(mid))
		{
			l = mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	cout << r;
}
