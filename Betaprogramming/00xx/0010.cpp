#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int a[3] = {1,0,0};
    string s ;
    cin >> s;
    for (int i =0 ; i<s.size() ; i++)
    {
        if(s[i] == 'A')
        swap(a[0] , a[1]);
        if(s[i] == 'B')
        swap(a[1] , a[2]);
        if(s[i] == 'C')
        swap(a[0] , a[2]);
    }
    for (int i =0 ; i<3 ; i++)
    {
        if(a[i] == 1)
        cout << i+1 ;
    }
}
