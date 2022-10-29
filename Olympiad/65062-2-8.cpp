#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cout << "Please input area : ";
    cin >> x;
    if(x>400)cout << "Total service costs : " << x*5 << " baht";
    else if(x>200)cout << "Total service costs : " << x*7.50 << " baht";
    else if(x>80)cout << "Total service costs : " << x*10 << " baht";
    else cout << "Total service costs : " << x*12.50 << " baht";
}
