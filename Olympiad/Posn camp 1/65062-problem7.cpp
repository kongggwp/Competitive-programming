#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,line=1;
    cin >> n;
    for(int i=1 ; i<=n ; i++)
     {
         printf("%c",'A'+((i-1)%26));
         c++;
         if(c==line)
         {
             line++;
             c=0;
             cout << "\n";
         }
     }
}
