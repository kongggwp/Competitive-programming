#include <iostream>
using namespace std;
int main(){
    int a[9],sum=0;
    for(int i=0 ; i<9 ;i++){
        cin >> a[i];
        sum = a[i] + sum ;
    }
    for(int i=0 ; i<9 ; i++){
        for(int j=0 ;j<9 ; j++ ){
            if(sum-(a[i]+a[j])==100){
                for(int k =0 ; k<9 ; k++)
                {
                    if(k!=i and k!=j)
                    {
                        cout << a[k] << endl;
                    }
                }
            }
        }
    }
}
