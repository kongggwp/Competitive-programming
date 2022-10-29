#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[99999] , max=-1001 , min=1001 , i=0;
    while(true)
    {
        cin >> x[i];
        if(x[i]==-1009)break;
        if(x[i]>max)max=x[i];
        if(x[i]<min)min=x[i];
    }
    cout << max-min;
}
