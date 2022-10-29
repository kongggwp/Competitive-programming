#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s ;
    for(int i=1 ; i<=s.size() ; i++)
    {
     if(i%3!=0){
        if(i==1)
        {
            cout << "..#..";
        }
        else{
            cout << ".#..";
        }
     }
     else{
            cout << ".*..";
        }
     }
     cout << endl;
    for(int i=1 ; i<=s.size()*2 ; i++)
    {
     if(i%6!=0 && (i+1)%6!=0){
        if(i==1)
        {
            cout << ".#.";
        }
        else{
            cout << "#.";
        }
     }
     else{
            cout << "*.";
        }
     }
     cout << endl;
    for(int i=1 ; i<=s.size() ; i++)
    {
        if(i%3!=0 && (i-1)%3!=0 || i==1){
            cout << "#." << s[i-1] <<".";
        }
        else{
            cout << "*." << s[i-1] <<".";
        }
        if(i==s.size())
        {
            if(i%3!=0){
                cout << "#";
            }
            else{
                cout << "*";
            }
        }
    }
    cout << endl ;
    for(int i=1 ; i<=s.size()*2 ; i++)
    {
     if(i%6!=0 && (i+1)%6!=0){
        if(i==1)
        {
            cout << ".#.";
        }
        else{
            cout << "#.";
        }
     }
     else{
            cout << "*.";
        }
     }
    cout << endl ;
    for(int i=1 ; i<=s.size() ; i++)
    {
     if(i%3!=0){
        if(i==1)
        {
            cout << "..#..";
        }
        else{
            cout << ".#..";
        }
     }
     else{
            cout << ".*..";
        }
     }
     cout << endl;
}
