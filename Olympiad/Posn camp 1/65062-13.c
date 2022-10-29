#include <stdio.h>
int main()
{
    srand(time(0));
    int x=rand()%100+1 , n , i=0;
    while(n!=x)
    {
        printf("Enter number (1-100) : ");
        scanf("%d",&n);
        i++;
    }
    printf("You guessed %d times wrong.",i);
}
