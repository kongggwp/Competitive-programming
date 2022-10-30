#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max=0 , temp , k=0 , c=0;
    string s1,s2;
    cin >> s1 >> s2 ;
    int l1 = s1.size() , l2 = s2.size() ;
    for(int i=0 ; i<l1 ; i++)
    {
        for(int j=0 ; j<l2 ; j++)
        {
            while(i+k<l1 && j+k <l2 && s1[i+k]==s2[j+k])
                {
                    c++;
                    k++;
                }
            if(c>max)
                {
                 max = c;
                 temp = j;
                }
            c=k=0;
        }
    }  
    //cout << max << endl << temp ;
    for(int i=0 ; i<max ; i++)
    {
        cout << s2[temp+i];
    } 
}
