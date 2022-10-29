#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    string a , b , c , temp , anew;
    cin >> a >> b >> c ;
  anew = a ;
    if(b[0]=='*')
    {
        for(int i=1 ;i<c.size() ; i++)
        {
            a += '0';
        }
        cout << a;
    }
    else if(b[0]=='+')
    {
      if(a.size() == c.size())
      {
        cout << '2';
        for(int i=1 ; i<a.size() ; i++)
          {
            cout << '0';
          }
        return 0;
      }
      if (a>c)
      {
        swap (a,c);
      }
        cout << '1';
        for(int i=1 ; i<=c.size()-a.size()-1 ; i++)
          {
            cout << '0';
          }
      cout << a;
    } 
  }
