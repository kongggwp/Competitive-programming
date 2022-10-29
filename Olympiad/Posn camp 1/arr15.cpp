#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][2] , b[3][2] , sum[3][2];
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            cin >> a[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            printf("b[%d][%d] = ",i,j);
            cin >> b[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
}
