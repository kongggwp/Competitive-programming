#include<bits/stdc++.h>
using namespace std;
const int N = 1048576;
int seg[N] , n , q;
char c;
void update(int ind , int low , int high , int i , int val)
{
	if(low == high)
	{
		seg[ind] = val;
		return;
	}
	int mid = (low + high)>>1;
	if(i<=mid)update(2*ind , low , mid , i , val);
	else update(2*ind+1 , mid+1 , high , i , val);
	seg[ind] = max(seg[2*ind] , seg[2*ind+1]);
}
int query(int ind , int low , int high , int l , int r)
{
	//no overlap [low high][l r] or [l r][low high]
	if(high<l or r<low)return INT_MIN;

	//conplete overlap [l low high r]
	if(low>=l && high<=r)return seg[ind];

	//partial overlap คือ นอกเหนือจาก2อันบน
	int mid = (low + high)>>1;
	int left = query(2*ind , low  , mid , l , r) , right = query(2*ind+1 , mid+1 , high , l , r);
	return max(left , right);
}
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> n >> q;
	while(q--)
	{
		cin >> c;
		if(c=='U')
		{
			int i , val;
			cin >> i >> val;
			update(1 , 1 , n , i , val);
		}
		else
		{
			int l , r;
			cin >> l >> r;
			cout << query(1 , 1 , n , l , r) << '\n';
		}
	}
}
