#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b;
        for(int i=1 ;i<=a ; i++)
        {
            if(a%i==0 && b%i==0)
            {
                c=i;
            }
        }
        cout << c ;
}
