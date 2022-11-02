#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c=0;
    if(s[0]=='0')c++;
    int len = s.size();
    for(int i=0 ; i<len; i++)
    {
        if(s[i]!=s[i+1])c++;
    }
    cout << c/2 ;
}
