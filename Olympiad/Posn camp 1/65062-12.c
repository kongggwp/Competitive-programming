#include <stdio.h>

int main(void) {
  int n ;
  scanf("%d",&n);
  int a[n] , b[n];
  int na = n/2+n%2 , nb = n/2 , temp;
  srand(time(0));
  for(int i=0 ; i<n; i++)
    {
      if(i<n/2+n%2)
      {
        a[i] = rand() % 98 + 2;
        printf("%d ",a[i]);
      }
      else
      {
        b[i-n/2] = rand() % 98 + 2;
        printf("%d ",b[i-n/2]);
      }
    }
  printf("\n");

  for(int i=0 ; i<na-1 ; i++)
    {
      for(int j=0 ; j<na-i-1 ; j++)
        {
          if(a[j+1]>a[j])
          {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
          }
        }
    }
    for(int i=0 ; i<na ; i++)
      {
        if(i!=na-1)
        printf("%d ",a[i]);
        else
        printf("%d|",a[i]);
      }

  for(int i=0 ; i<nb-1 ; i++)
    {
      for(int j=0 ; j<nb-i-1 ; j++)
        {
          if(b[j+1]<b[j])
          {
            temp = b[j];
            b[j] = b[j+1];
            b[j+1] = temp;
          }
        }
    }
    for(int i=0 ; i<nb ; i++)
      {
        printf("%d ",b[i]);
      }
  return 0;
}

