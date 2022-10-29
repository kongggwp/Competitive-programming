#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int k=0 ; k<i ; k++)
            cout << " ";
        cout << "\\";
        for(int j=0 ; j<(n-i-1)*2 ; j++)
            cout << " ";
        cout << "/" << endl;
    }
}
