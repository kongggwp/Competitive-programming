#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] , odd=0 , even=0;
    for(int i=0 ; i<5 ; i++)
    {
        cin >> a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    cout << "even = " << even << endl;
    cout << "odd = " << odd;

}
