#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , min = INT_MAX , max = INT_MIN  ;
    float avg,sum=0;
    cout << "Input number of indices : ";
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cout << "Index" << i << ":";
        cin >> a[i];
        if(a[i]>max)max=a[i];

        if(a[i]<min)min=a[i];
        sum += a[i];
    }
    avg = sum/n;
    cout << "AVG = " << avg << endl << "Max = " << max << endl << "Min = " << min ;
}
