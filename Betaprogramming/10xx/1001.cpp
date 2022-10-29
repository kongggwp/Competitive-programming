#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w,c=0;
    cin >> h >> w ;
    int a[w] ;
    char s[h][w];
    for(int i=0 ;i<h ; i++)
        for(int j=0 ; j<w ; j++)
        scanf(" %c",&s[i][j]);
    for(int i=0 ; i<w ; i++)
        cin >> a[i];
    for(int i=0 ; i<w ; i++)
    {
        for(int j=0 ; j<h ; j++)
        {
            if(s[j][i]=='O')
            {
               for(int k=0 ; k<a[i] ; k++)
                {
                    s[j-k-1][i]='#';
                } 
                break;
            }
            else c++;
        }
        if(c==h and a[i]!=0)
        {
            for(int k=0 ; k<a[i] ; k++)
            s[h-k-1][i]='#';
        }
        c=0;
    } 
    for(int i=0 ;i<h ; i++)
    {
        for(int j=0 ; j<w ; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
}
