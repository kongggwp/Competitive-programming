#include <stdio.h>
#include <math.h>
float ans(float x)
{
    return pow(x,2)+1;
}
int main()
{
    float x;
    scanf("%f",&x);
    printf("%f",ans(x));
}
