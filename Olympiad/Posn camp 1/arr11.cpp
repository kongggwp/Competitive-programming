#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0 ; i<5 ; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; i<5 ; i++)
    {
        cout << a[i] << " ";
        for(int j=0 ; j<a[i]; j++)
         {
             cout << "*";
         }
         cout << endl;
    }
}
