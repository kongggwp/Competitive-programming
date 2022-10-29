#include <stdio.h>
int main()
{

int X1, X2, X3;
float sum, mean;
printf("Enter X1,X2,X3: ");
scanf("%d,%d,%d", &X1,&X2,&X3);
sum = X1+X2+X3;
mean = sum/3;
printf("Mean = %f\n", mean);

return 0;
}
