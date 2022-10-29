#include <stdio.h>

int main(void) {
    char a[21];
    int l , w , len=0;
    scanf("%s",a);
    scanf("%d",&l);
    scanf("%d",&w);
    for(int i=0 ; a[i]!='\0' ; i++)
    {
        len++;
    }
    for(int i=0 ; i<w ; i++)
    {
        for(int j=0 ; j<l ; j++)
        {
            printf("%c",a[(j+i)%len]);
        }
        printf("\n");
    }
}
