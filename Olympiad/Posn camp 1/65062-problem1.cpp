#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year , m ;
    cin >> year >> m;
    year -=543;
    int md[12] = {31,0,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0 and year%100!=0) or year%400 ==0)
    {
        md[1]=29;
    }
    else md[1]=28;
    cout << md[m-1];
}
