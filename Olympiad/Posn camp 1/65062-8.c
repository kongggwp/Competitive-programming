#include<stdio.h>
int main(){
    int n;
    printf("Input Index : ");
    scanf("%d",&n);
    int h[n] , max=0;
    for(int i=0 ; i<n ; i++)
    {
        printf("Input number [%d] : ",i);
        scanf("%d",&h[i]);
        if(h[i]>max)max=h[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        if(i==0 )printf("   -");
        else printf(" -");
    }
    printf("\n");

    for(int i=10 ; i>max ; --i)
    {
        if(i==10) printf("%d\n",i);
        else printf(" %d\n",i);

    }

    for(int i=0 ; i<max ; ++i)
    {
        if(max-i==10) printf(" %d",max-i);
        else printf(" %d ",max-i);

        for(int j=0; j<n ; j++)
        {
                if(h[j]+i==max)
                {
                    printf("* ");
                    h[j]-=1;
                }
                else printf("  ");
        }
        printf("\n");
    }
    printf(" 0\n");
    for(int i=0 ; i<n ; i++)
    {
        if(i==0 )printf("   -");
        else printf(" -");
    }
    printf("\n");
    for(int i=0 ; i<n ; i++)
    {
        if(i==0 )printf("   0");
        else printf(" %d",i);
    }

}

