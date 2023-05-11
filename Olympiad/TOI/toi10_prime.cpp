#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=8e6;
bitset<N>prime;
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin >> n;
	int cnt=0;
	for(int i=2 ; i<=N ; i++)
	{
		if(!prime[i])
		{
			cnt++;
			if(cnt==n)
			{
				cout << i;
				return 0;
			}
			for(int j=i*i ; j<=N ; j+=i)
			{
				prime[j] = 1;
			}
		}
	}
}
