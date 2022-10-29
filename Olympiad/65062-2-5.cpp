#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Please enter number : ";
    cin >> n;
    n = n%10;
    string a[10] = {"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};
    cout << a[n];
}
