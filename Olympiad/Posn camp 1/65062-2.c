#include <stdio.h>
int main()
{
    int m,n,p,q ;
    printf("Input Matrix A dimension nxm :");
    scanf("%d %d",&m,&n);
    printf("Input Matrix B dimension ixj :");
    scanf("%d %d",&p,&q);
    int a[m][n] , b[p][q] , ans[m][q];
    if(n!=p)
    {
        printf("Not multiply");
    }
    else
    {
        printf("Enter the elements of Matrix A:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", & a[i][j]);
            }
        }

        printf("Enter the elements of Matrix B:\n");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                scanf("%d", & b[i][j]);
            }
        }
        printf("%\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                ans[i][j] = 0;
                for (int k = 0; k < p; k++) {
                    ans[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ",ans[i][j]);
            }
            printf("%\n");
        }

    }
}
