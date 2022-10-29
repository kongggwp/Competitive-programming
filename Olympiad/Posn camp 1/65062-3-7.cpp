#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(x>=0)
    {
        for(int i=1 ; i<=abs(x) ; i++)
        {
            cout << i << " " << pow(i,2) << endl;
        }
    }
    else{
        for(int i=1 ; i>=x ; i--)
        {
            cout << i << " " << pow(i,2) << endl;
        }


    }
}
