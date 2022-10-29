#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n] , max=0 ;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)max=a[i];
    }

    for(int i=0 ; i<max ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            for(int k=0 ; k<a[j] ; k++)
            {
                if(i+k==max-1)printf("/");
                else printf(" ");
            }
            for(int k=a[j]-1 ; k>=0 ; k--)
            {
                if(i+k==max-1)printf("\\");
                else printf(" ");
            }
        }
        printf("\n");
    }
}
