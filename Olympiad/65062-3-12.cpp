#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,m,sum;
    cin >> d >> m;
    for(int k=0 ; k<4 ; k++)
    {
        for(int i=1 ; i<3*d-1 ; i++)
        {
            cout << " ";
        }
        for(int i=1 ; i<=m ; i++)
        {
            if(d+i==9)cout << " ";
            if(i<9)
            {
            cout << i << "  ";
            }
        else cout << i << " ";
        if((i+d-1)%7==0)cout << endl;
        if(d==7 && i==8)cout << " ";
        }
        cout << "\n";
        d = d + m%7;
        d = d%7;
        if(d==0)d=7;
    }

}
