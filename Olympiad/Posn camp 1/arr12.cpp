#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a[5][3] , row[5]={} , column[3]={};
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            cin >> a[i][j];
        }
    }
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            row[i]+= a[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            column[i]+=a[j][i];
        }
    }
    for(int i=0 ; i<5 ; i++)
    printf("Row[%d] = %d ",i , row[i]);
    cout << endl;
    for(int i=0 ; i<3 ; i++)
    printf("column[%d] = %d ",i,column[i]);
}
