#include<stdio.h>
int main()
{
    float w,h;
    printf("Input weight(kg) : ");scanf("%f",&w);
    printf("Input height(cm) : ");scanf("%f",&h);
    float bmi = w/h/h*10000;
    printf("BMI = %f",bmi);
}
