#include <stdio.h>
int main()
{ int i, N, X;

float sum=0, mean;
printf("Enter N: "); scanf("%d", &N);
for (i=1;i<=N; i++) {
printf("Enter X%d= ",i); scanf("%d", &X);
sum = sum + X;
}
mean = sum/N;
printf("Mean = %f\n", mean);

return 0;
}
