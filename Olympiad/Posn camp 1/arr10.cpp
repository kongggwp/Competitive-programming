#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n] , mode[n]={} , current , c=0 , mc=0 , most;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        current = a[i];
        for(int j=i ; j<n ; j++)
        {
            if(current == a[j])
            {
                c++;
                current = a[j];
            }
            if(c > mc)
            {
                most = a[j];
                mc = c;
            }
        }
        mode[i] = c ;
        c=0;
    }
    if(mc==1)
    {
        cout << "No mode";
        return 0;
    }
    cout << "Mode is ";
    for(int i =0 ; i<n ; i++)
    {
        if(mode[i]==mc)
        {
            cout << a[i] << " ";
        }
    }
}
