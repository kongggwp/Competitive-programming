#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
	    cin >> a[i];
	    if(a[i]>=30)cout << "YES\n";
	    else cout << "NO\n";
	}
	return 0;
}
