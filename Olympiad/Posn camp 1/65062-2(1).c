#include <stdio.h>
#include <math.h>
float parameter(float a, float b)
{
    return a+b+sqrt(pow(a,2)+pow(b,2));
}
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f",parameter(a,b));
}
