#include <stdio.h>
int main()
{ int i;
float mul=1;
for (i=1;i<=10; i++) {
printf("%d x ", i);
mul = mul * i;
}
printf(" = %f\n", mul);

return 0;
}
