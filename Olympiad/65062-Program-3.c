#include <stdio.h>
int main()
{

int X, Y;
float area;
printf("Enter width (X): ");
scanf("%d", &X);
printf("Enter length (Y): ");
scanf("%d", &Y);
area = X * Y;
printf("Area = %f\n", area);

return 0;
}
