#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846
int main()
{
    int c;
    float r,Area,Circumference;
    cout << "Please input radius : ";
    cin >> r;
    cout << "Calculator Menu :\n";
    cout << "\t\t1.Find area\n\t\t2.Find circumference";
    cout << "\nChoose menu :";
    cin >> c;
    if(c==1){
        Area = pi*r*r;
        cout << "Area = " << Area;
    }
    if(c==2){
        Circumference = 2*pi*r;
        cout << "Circumference = " << Circumference;
    }
}
