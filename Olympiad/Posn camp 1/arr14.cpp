#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4][4] , sum=0;
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            cin >> a[i][j];
            if(j>i)
            {
                sum+= a[i][j];
            }

        }
    }
    cout << "Sum = " <<sum;
}
