#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int arr[3] ;
    string s;
    for(int i=0 ; i<3 ;i++)
    {
        cin >> arr[i];
    }
    cin >> s;
    sort(arr , arr+3);
    if (s == "ABC")
    {
        cout << arr[0] << " " << arr[1] << " " << arr[2] ;
    }
    else if (s == "ACB")
    {
        cout << arr[0] << " " << arr[2] << " " << arr[1] ;
    }
    else if (s == "CAB")
    {
        cout << arr[2] << " " << arr[0] << " " << arr[1] ;
    }
    else if (s == "CBA")
    {
        cout << arr[2] << " " << arr[1] << " " << arr[0] ;
    }
    else if (s == "BAC")
    {
        cout << arr[1] << " " << arr[0] << " " << arr[2] ;
    }
    else if (s == "BCA")
    {
        cout << arr[1] << " " << arr[2] << " " << arr[0] ;
    }
}
