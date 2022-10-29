#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mid , finall;
    float avg;
    string grade;
    cout << "Please enter midterm score : ";
    cin >> mid;
    cout << "Please enter final score : ";
    cin >> finall ;
    avg = (mid + finall)/2.0 ;
    if(avg>=80) grade =  "G , Good";
    else if(avg>=50) grade = "P , Pass";
    else grade = "F , Fail";
    cout << "Your score = " << avg << " %\n";
    cout << "Grade = " << grade;

}
