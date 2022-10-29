#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , day , hour , m , sec;
    cin >> n;
    day = n/86400;
    hour = (n-day * 86400)/3600;
    m = (n-day * 86400-hour*3600)/60;
    sec = n-day * 86400-hour*3600 - m*60;
    if(day!=0)cout << day << " Days ";
    if(hour!=0)cout << hour << " Hours ";
    if(m!=0)cout << m << " Minutes ";
    if(sec!=0)cout << sec << " Seconds";
}
