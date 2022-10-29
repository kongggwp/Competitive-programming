#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4] , x=0 , y=0;
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            cin >> a[i][j];
            if(i==j)
            x +=a[i][j];
            if(i+j==3)
            y+=a[i][j];
        }
    }
    cout << "diagonal1 = " << x << endl;
    cout << "diagonal2 = " <<y << endl;
    cout << "Sum = " << x+y;
}
