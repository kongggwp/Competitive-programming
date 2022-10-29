#include <stdio.h>
#include <math.h>
#include<string.h>
char* armcheck(char n[])
{
    int sum=0 , len = strlen(n),real=0;
    for(int i=0 ; i<len ; i++)
    {
        sum+=pow((n[i]-'0'),len);
        real += (n[i]-'0')*pow(10,len-1-i);
    }
    if(real==sum)return "Yes";
    else
    return "No";
}
int main(){
    char n[999];
    scanf("%s",n);
    printf("%s",armcheck(n));
}
