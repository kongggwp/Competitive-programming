#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    char a[100] , b[100] , c[100] ;
    for(int i=0 ; i<100 ; i++)
    {
        //เก็บ a[100]
        if(i%3==0)
        {
            a[i]='A';
        }
        else if(i%3==1){
            a[i]='B';
        }
        else{
            a[i]='C';
        }
        //เก็บ b[100]
        if(i%2==0)
        {
            b[i]='B';
        }
        else if(i%4==1)
        {
            b[i]='A';
        }
        else if(i%4==3){
            b[i]='C';
        }
        if(i%6==0 or (i-1)%6==0){
            c[i]='C';
        }
        else if(i%6==2 || (i-1)%6==2){
            c[i]='A';
        }
        else{
            c[i]='B';
        }
    }
    
    int n , ca=0 , cb=0 , cc=0;
    string s;
    cin >> n >> s;
    for(int i=0  ; i<n ; i++)
    {
        if(a[i]==s[i]){
            ca++;
        }
        if(b[i]==s[i])
        {
            cb++;
        }
        if(c[i]==s[i])
        {
            cc++;
        }
    }
    
    int x[3]={ca,cb,cc}; 
    sort(x , x+3);
    cout << x[2] << endl;
    if(ca==x[2]) cout << "Adrian\n" ;
    if(cb==x[2]) cout << "Bruno\n" ;
    if(cc==x[2]) cout << "Goran\n" ;
}
