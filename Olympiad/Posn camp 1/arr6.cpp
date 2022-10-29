#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[20] , sum=0 , c=0.00 , avg;
    for(int i=0 ; i<20 ; i++)
    {
        cin >> a[i];
        if(a[i]>0)
        {
            sum+=a[i];
            c++;
        }

    }
    cout << sum/c;
}
