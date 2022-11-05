#include <bits/stdc++.h>
using namespace std;

/*int f(int n , int m , string s1 , string s2 , vector<vector<int>>dp)
{
    if(n<0 || m<0)return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(s1[n] == s2[m]) return dp[n][m] = 1+f(n-1 , m-1 , s1 , s2 , dp);
    else return dp[n][m] = f(n , m-1 , s1 , s2 , dp);
}*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	string s1,s2 ;
	cin >> t;
	for(int i=0 ; i<t ; i++)
	{
	    cin >> s1 >> s2;
	    int n=s1.size() , m=s2.size() , a =0, b=0;
	    if(n>m)
	    {
	        swap(s1,s2);
	        swap(n,m);
	    }
	    for(int i=0 ; i<m ; i++)
	    {
	       
	        if(s1[a]==s2[b])
	        {
	            a++;
	            b++;
	        }
	        else b++;
	    }
	    if(a==n)cout << "YES"<<endl;
	    else cout << "NO" << endl;
	}

}
