#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    string s;
    getline(cin , s); 
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            i=i+2;
        }
        cout << s[i];
    }
}
