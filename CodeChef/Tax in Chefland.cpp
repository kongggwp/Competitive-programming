#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++)
	{
	    cin >> a[i];
	    if(a[i]>100)cout << a[i] -10 << endl;
	    else cout << a[i] << endl ;
	}
	return 0;
}
