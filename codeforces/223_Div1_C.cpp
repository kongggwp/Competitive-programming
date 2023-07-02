#include<bits/stdc++.h>
using namespace std;
string s;
int q;
struct node
{
	int open , close , full;
};
node seg[4000000];
node merge(node a1 , node a2)
{
	node ans = {0,0,0};
	ans.full = a1.full + a2.full + min(a1.open , a2.close);
	ans.open = a1.open + a2.open - min(a1.open , a2.close);
	ans.close = a1.close + a2.close - min(a1.open , a2.close);
	return ans;
}
void build(int idx , int low , int high)
{
	if(low == high)
	{
		seg[idx] = {s[low]=='(' , s[low]==')' , 0};
		return;
	}
	int mid = (low+high)>>1;
	build(idx*2+1 , low , mid);
	build(idx*2+2 , mid+1 , high);
	seg[idx] = merge(seg[idx*2+1] , seg[idx*2+2]);
}
node query(int idx , int low , int high , int l , int r)
{
	if(r<low || l>high)return {0,0,0};
	if(low>=l && high<=r)return seg[idx];
	int mid = (low+high)>>1;
	node left = query(idx*2+1 , low , mid , l , r) , right = query(idx*2+2 , mid+1 , high , l , r);
	return merge(left , right);
}
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> s >> q;
	int sz = s.size();
	build(0 , 0 , sz-1);
	while(q--)
	{
		int l , r;
		cin >> l >> r;
		--l , --r;
		cout << query(0 , 0 , sz-1 , l , r).full*2 << endl;
	}
}
