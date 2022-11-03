#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
	    cin >> a[i];
	    if(a[i]>=67 && a[i]<=45000)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
