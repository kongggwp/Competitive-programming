#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[4] , sum=0;
    float avg;
    for(int i=0 ; i<4 ; i++)
    {
        cin >> a[i];
        if(a[i]>100 || a[i]<0)
        {
            cout << "Invalid input!!";
            return 0;
        }
        sum = a[i] + sum;
    }
    avg = sum/4;
    cout << avg;



}
