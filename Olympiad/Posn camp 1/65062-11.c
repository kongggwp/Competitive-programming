#include <stdio.h>
#include <string.h>
int main(void) {
  char s[65];
  gets(s);
  int len = strlen(s) ,n;
  scanf("%d",&n);
  for(int i=0 ; i<len ; i++)
    {
      if(s[i]==' ')
      {
        s[i]='7';
      }
    }
  for(int i=0 ; i<n; i++)
    {
      for(int j=0 ; j<n ; j++)
        {
          if(i+j*n<=len-1)
          printf("%c",s[i+j*n]);
          else break;
        }
    }

  return 0;
}
