#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define inf 1e15
using pii = pair<int,int>;
using piii = pair<int,pii>;
using piiii = pair<pii,pii>;
int mod = 1e9+7;
int n;
char grid[1000][1000];
int vis[1000][1000];
int pari=0;
int area = 0;

bool cmp(pii a1 ,pii a2)
{
	if(a1.first == a2.first)return a1.second<a2.second;
	return a1.first > a2.first;
}

void dfs(int i , int j)
{
	if(i<0 || j<0 || i>=n || j>=n || grid[i][j]=='.')
	{
		pari++;
		return;
	}
	if(vis[i][j])return;
	vis[i][j] = 1;
	area++;
	dfs(i+1,j);
	dfs(i,j+1);
	dfs(i-1,j);
	dfs(i,j-1);
}

int32_t main()
{
	freopen("perimeter.in" , "r" , stdin);freopen("perimeter.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin >> grid[i][j];
		}
	}
	vector<pii>a;

	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(grid[i][j] == '#' && !vis[i][j])
			{
				dfs(i,j);
				a.push_back({area , pari});
				area=0;
				pari=0;
			}
		}
	}
	sort(a.begin() , a.end() , cmp);
	cout << a[0].first << " " << a[0].second;
}
