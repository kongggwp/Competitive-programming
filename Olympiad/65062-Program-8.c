#include <stdio.h>
int main()
{ int i, sum=0;

for (i=1;i<=100; i++) {
printf("%d+", i);
sum = sum + i;
}
printf(" = %d\n", sum);

return 0;
}
