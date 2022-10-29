#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , count[10]={} , i=0 , b[10]={} , c[9999] ,same;
    string s;
    cin >> n;
    while(n!=0)
    {
        s+= n%10+'0';
        c[i]= n%10;
        count[n%10]++;
        n/=10;
        i++;
    }
    for(int i=0 ; i<s.size() ; i++)
    {
            if(count[c[s.size()-i-1]]!=-1)
            {
                cout << s[s.size()-i-1] << " = " <<count[c[s.size()-i-1]] << endl;
                count[c[s.size()-i-1]] = -1;
            }

    }
}
