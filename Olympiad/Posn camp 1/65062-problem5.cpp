#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int k=0 ; k<n-i ; k++)
            cout << " ";
        cout << "/";
        for(int j=0 ; j<2*i ; j++)
            cout << " ";
        cout << "\\" << endl;
    }
}
