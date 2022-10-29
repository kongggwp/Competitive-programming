#include <bits/stdc++.h>
using namespace std;
long long int decimalToBinary(int n){
    long long int ans = 0;
    long long int remainder, i = 1;
    while(n!=0){
        remainder = n % 2;
        ans += remainder*i;
        i = i * 10;
        n = n / 2;
}
    return ans;
    }
    int main() {
    long long int n ;
    cin >> n;
    long long int bin = decimalToBinary(n);
    cout << bin ;
    return 0;
}
