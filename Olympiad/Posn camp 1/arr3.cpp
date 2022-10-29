#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20] , c=0;
    for(int i=0 ; i<20 ; i++)
    {
        cin >> a[i];
        if(a[i]>0)c++;
    }
    cout << c;
}
