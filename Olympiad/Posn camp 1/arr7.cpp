#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4] , b[4] ,c=0;
        cout << " Input members of set a and b where numbers in the set can't be duplicate by the set theorem\n";
        for(int i=0 ; i<4 ; i++)
        {
            cout << "Input " << "a[" << i <<"]"<<" ";
            cin >> a[i];
        }
        for(int i=0 ; i<4 ; i++)
        {
            cout << "Input " << "b[" << i <<"]"<<" ";
            cin >> b[i] ;
        }

        for(int i=0 ; i<4 ; i++)
        {
            for(int j=0 ; j<4 ; j++)
            {
                if(a[i]==b[j])
                {
                    c++;
                }
            }
        }
        cout << "same = " << c;
}
