#include <iostream>
using namespace std;
int main(){
    int a[42], b[10] , c , count=0;
    for(int i=0 ; i<42 ; i++)
    {
        a[i] = 0 ;
    }
    for(int i=0 ; i<10 ; i++)
    {
        cin >> b[i];
        c = b[i]%42 ;
        a[c] = 1;
    }
    for(int i=0 ; i<42 ; i++)
    {
        if(a[i]==1)
        count++;
    }
    cout << count ;
}
