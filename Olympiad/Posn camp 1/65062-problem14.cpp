#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],max=0,c=0;
    for(int i=0 ; i<3 ; i++)cin >> a[i] ;
    if(a[0]+a[1]+a[2]!=100)
    {
        cout << "error";
        return 0;
    }
    else
    {
        for(int i=0 ; i<3 ; i++)
        {
            if(a[i]>max)max=a[i];
        }
    }
    for(int i=0 ; i<3 ; i++)
    {
        if(max==a[i])
        {
            c++;
        }
    }
    if(c>1)cout << "i love you";
    else
    {
        for(int i=0 ; i<3 ; i++)
        {
            if(max==a[i])
            {
                if(i==0)
            {
                cout << "paper";
            }
            else if(i==1)
            {
                cout << "rock";
            }
            else cout<< "Scissors";
            }
        }

    }

}
