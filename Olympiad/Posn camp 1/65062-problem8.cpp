#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            cout << " ";
        }
        printf("%c",'A'+n-i-1);
        for(int k=0 ; k<(n-1-i)*2-1 ; k++ )
        {
            cout << " ";
        }
        if(i!=n-1)
        printf("%c",'A'+n-i-1);

        for(int j=0 ; j<i*2 ; j++)
        {
            cout << " ";
        }
        printf("%d",n-i);
        for(int k=0 ; k<(n-1-i)*2-1 ; k++ )
        {
            cout << " ";
        }
        if(i!=n-1)
        printf("%d\n",n-i);
        if(i==n-1) cout << endl;
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i ; j<n-2 ; j++)
        {
            cout << " ";
        }
        printf("%c",'A'+i+1);
        for(int k=0 ; k<2*i+1 ; k++)
        {
            cout << " ";
        }
        printf("%c",'A'+i+1);


        for(int j=i ; j<2*n-i-4 ; j++)
        {
            cout << " ";
        }
        printf("%d",i+2);
        for(int k=0 ; k<2*i+1 ; k++)
        {
            cout << " ";
        }
        printf("%d\n",i+2);
    }
}
