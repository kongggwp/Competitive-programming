#include <bits/stdc++.h>
    using namespace std;
    int pa(string s)
    {
        if(s.size()==1)return 1;
        for(int i=0 ; i<s.size()/2 ; i++)
        {
            if(s[i] != s[s.size()-1-i])
            {
                return 0;
            }
            return 1;
        }
    }
    int main()
    {
        string s,s1,s2;
        cin >> s;
        int len = s.size();
        for(int i=0 ; i<len ; i++)
        {
            if(s[i]>='a' && s[i]<='z')s[i]-='a'-'A';
        }
        s1 = s.substr(0, len/2);
        s2 = s.substr(len/2+len%2, len/2);
        if(pa(s)==0)cout << "No";
        else
        {
            if(pa(s1)==1 && pa(s2)==1) cout << "Double Palindrome";
            else cout << "Palindrome";
        }
    }
