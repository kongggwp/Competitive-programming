#include <bits/stdc++.h>
using namespace std;
int main()
{
    float u,x;
    cout << "Total Usage : ";
    cin >> u;
    if(u>=5001)
    {
     x = (u-5000)*21+96050;
     cout << "Total Amount : " << x ;
    }
    else if(u>=1001)
    {
     x = (u-1000)*20+16050;
     cout << "Total Amount : " << x ;
    }
    else if(u>=501)
    {
     x = (u-500)*18+7050;
     cout << "Total Amount : " << x ;
    }
    else if(u>=101)
    {
     x = (u-100)*15+1050;
     cout << "Total Amount : " << x ;
    }
    else if(u>=51)
    {
     x = (u-50)*12+450;
     cout << "Total Amount : " << x ;
    }
    else if(u>=11)
    {
     x = (u-10)*10+50;
     cout << "Total Amount : " << x ;
    }
    else
    {
     x = u*5;
     cout << "Total Amount : " << x ;
    }
}
