#include <stdio.h>
int main()
{
    srand(time(0));
    int x=rand()%100+1 , n ;
    while(n!=x)
    {
        printf("Enter number (1-100) : ");
        scanf("%d",&n);
       if(n>x)printf("The number is too high. Try again.");
       if(x>n) printf("The number is too low. Try again.");
    }
    printf("Correct !!!");
}
