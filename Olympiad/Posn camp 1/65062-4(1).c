#include <stdio.h>
#include <math.h>
int main(){
printf("sin\tcos\ttan\n");
for(double i=0 ; i<=90 ; i+=5)
{
    double pi = 3.14159;
    printf("%.4lf\t%.4lf\t%.4lf\n",sin(i*(pi/180)),cos(i*(pi/180)),tan(i*(pi/180)));
}
}
