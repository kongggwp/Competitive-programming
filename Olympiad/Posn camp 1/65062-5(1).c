#include <stdio.h>
int max(int a[] , int n)
{
    int max = a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>max)max = a[i];
    }
    return max;
}
int min(int a[] , int n)
{
    int min = a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]<min)min = a[i];
    }
    return min;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("The largest element in the array is : %d\n",max(a,n));
    printf("The smallest element in the array is : %d",min(a,n));
}
