#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x==1)
    {
        cout << "Not prime";
        return 0 ;
    }
    for(int i=2 ; i<=sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    cout << "Prime";
}
