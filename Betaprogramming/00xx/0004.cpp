#include <iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    int small=0 , cap=0 ;
    for(int i=0 ; i<a.size() ; i++){
    if(a[i] >= 'a' and a[i] <='z'){
        small++ ;
    }
    else if(a[i] >= 'A' and a[i] <= 'Z'){
        cap++ ;
    }
    }
    if(small == 0) 
    {
        cout << "All Capital Letter" ;
    }
    else if(cap == 0)
    {
        cout << "All Small Letter" ;
    }
    else if(small!=0 and cap!=0)
    {
        cout << "Mix";
    }
}
