#include <bits/stdc++.h>
using namespace std;
int main(){
    int x , max=INT_MIN , min = INT_MAX ;
    for(int i=0 ; i<10 ; i++)
    {
        cin >> x;
        if(x>max)max=x;
        if(x<min)min=x;
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;
}
