#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
           cout << " ";
        }
        cout << a[i+2] <<endl;
    }
    cout << a[2] << " " << a[3] << " " << a[4] << " " << a[0] << " " << a[1] << endl;

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
           cout << " ";
        }
        cout << a[i] <<endl;
    }
}
