#include<stdio.h>
int main()
{
    int n , l , w;
    scanf("%d%d%d",&n,&l,&w);
    for(int i=0 ; i<w ; i++)
    {
        for(int j=0 ; j<l ; j++)
        {
            printf("%c",'A'+(j+i)%n);
        }
        printf("\n");
    }
}
