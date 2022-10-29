#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a;
    cout << "Input character : ";
    cin >> s;
    if(s >= 'a' && s<='z')
    {
        a=s;
        a=a-32;
        printf("%c",a);
    }
    else if(s>= 'A' && s<='Z')
    {
        a=s;
        a=a+32;
        printf("%c",a);
    }
    else
    {
        cout << "error";
    }

}
