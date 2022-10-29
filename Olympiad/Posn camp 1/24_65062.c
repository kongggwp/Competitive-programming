#include<stdio.h>
#include<string.h>
int main()
{
    int h,w,b,bw;
    char a[99] , c[2];
    printf("Input String\t\t==>");
    gets(a);
    printf("Height String\t\t==>");
    scanf("%d",&h);
    printf("Width String\t\t==>");
    scanf("%d",&w);
    printf("Border Character\t==>");
    scanf("%s",&c[0]);
    printf("Border Width \t\t==>");
    scanf("%d",&bw);
    int len = strlen(a);
    for(int i=0 ; i<bw ; i++)
    {
        for(int j=0 ; j<len*w+bw*2 ; j++)
        {
            printf("%c",c[0]);
        }
        printf("\n");
    }
    for(int i=0 ; i<h ; i++)
    {
        for(int k=0 ; k<bw ; k++)
        {
            printf("%c",c[0]);
        }
        for(int k=0 ; k<w; k++)
        {
            printf("%s",a);
        }
        for(int k=0 ; k<bw ; k++)
        {
            printf("%c",c[0]);
        }
        printf("\n");
    }
    for(int i=0 ; i<bw ; i++)
    {
        for(int j=0 ; j<len*w+bw*2 ; j++)
        {
            printf("%c",c[0]);
        }
        printf("\n");
    }
}
