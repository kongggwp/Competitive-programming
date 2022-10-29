#include <stdio.h>
int main()
{
int feet, inches;
printf("Enter number (in feet) ");
scanf("%d", &feet);
inches = feet*12;
printf("= %d inches\n", inches);
return 0;
}
