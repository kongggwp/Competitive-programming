#include <bits/stdc++.h>
using namespace std;

int xtodecimal(string numx , int base)
{
    int len = numx.size() , ans=0 , ascii , expo=1;
    for(int i=len-1 ; i>=0 ; i--)
    {
        ascii = numx[i];
        if(ascii>'9')ans += (ascii-'7')*expo;
        else ans += (ascii-'0')*expo;
        expo*=base;
    }
    return ans;
}

void decimaltox(int num , int base)
{
    string s;
    int i=0 , r;
    while(num!=0)
    {
        r=num%base;
        if(r>9)s += r+'7';
        else s += r+'0';
        num = num/base;
    }
    for(int i=s.size()-1 ; i>=0 ; i--)
        cout << s[i];
}
int main()
{
        int base ;
        string num1 , num2;
        cin >> base >> num1 >> num2 ;
        decimaltox((xtodecimal(num1,base) + xtodecimal(num2,base)),base);
}
