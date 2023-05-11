#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , q , x , sum=0;
	cin >> n >> q;
	int z[q]; 
	vector<pair<int,int>>a;
	int afirst[n];
	for(int i=1 ; i<=n ; i++)
	{
		cin >> x;
		sum+=x;
		a.push_back({sum,i});
	}
	for(int i=0 ; i<q ; i++)cin >> z[i]; 
	sort(a.begin() , a.end());
	for(int i=1 ; i<=n ; i++)
	{
		if(a[i].first>=a[i-1].first && a[i].second<=a[i-1].second)a[i].second = a[i-1].second;
		afirst[i-1] = a[i-1].first; 
	}
	for(int i=0 ; i<q ; i++)
	{
	   int index = upper_bound(afirst , afirst+n , z[i]) - afirst;
		cout << a[index-1].second << endl;
	}
    return 0;
}
