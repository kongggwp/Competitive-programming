#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count[10]={},j;
    cin >> n >> m;
    j=n;
    for(int i=n; j<=m ; i++)
    {
        while(i!=0)
        {
            count[i%10]++;
            i/=10;
        }
        i=j++;
    }
    for(int i=0 ; i<10 ; i++)
    {
        cout << i << " " << count[i] << endl;
    }
}
