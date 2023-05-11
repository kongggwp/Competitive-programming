#include<bits/stdc++.h>
using namespace std;
const int N=500000;
int a[N];
int t[N];
int s[N];
#define int long long int
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin >> n;
   for(int i=0 ; i<n ; i++)cin >> a[i];
   for(int i=0 ; i<n ; i++)cin >> t[i];
   sort(a , a+n);
   sort(t , t+n , greater<int>());
 	for(int i=0 ; i<n ; i++)s[i] = a[i] + t[i];
	sort(s , s+n);
   int ans=0;
   for(int i=1 ; i<n ; i++)
   {
		ans += abs(s[i]-s[i-1]);
   }
   cout << ans;
    return 0;
}
