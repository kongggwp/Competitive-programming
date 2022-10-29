#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
     string s;
     cin >> s;
     int r11=0 ,sum=0 , n;
     int len = s.size();
     for (int i = 0; i < len; i++) {
        sum+=s[i]-'0';
        n = r11 * 10 + (s[i] - '0');
        r11 = n % 11;
    }
    cout << sum%3 << " " << r11;
