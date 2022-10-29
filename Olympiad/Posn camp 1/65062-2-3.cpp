#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int basesalary , ot ;
    float all;
    cout << "Input your idenfication number : ";
    cin >> s;
    cout << "Input your base salary : ";
    cin >> basesalary ;
    cout << "Input your OT money : ";
    cin >> ot;
    all = basesalary + ot;

    if(all>=100000) all = all * 1.1;
    else if(all>=70000) all = all * 1.07;
    else if(all>=50000) all = all * 1.05;
    else if(all>=30000) all = all * 1.03;
    else all = all * 1.01;
    cout << all;

}
