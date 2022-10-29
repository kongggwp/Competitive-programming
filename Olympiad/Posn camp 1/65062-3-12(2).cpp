#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,m,sum,temp=0;
    cin >> d >> m;
    for(int k=0 ; k<3 ; k++)
    {
        for(int i=1 ; i<3*d-1 ; i++)
        {
            cout << " ";
        }
        for(int i=1 ; i<=m ; i++)
        {
            if(d+i==10)cout << " ";
            if(i<9)
            {
            cout << i << "  ";
            }
        else cout << i << " ";
        if((i+d-1)%7==0)cout << endl;
        }
        cout << "\n";

        d = d + m%7;
        d = d%7;
    }

}
