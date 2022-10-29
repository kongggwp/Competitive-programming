#include <stdio.h>
int main()
{ FILE *fp1,*fp2;
  int i,a;
      fp1=fopen("d:\\001.txt","w");
      for(int i=0 ; i<10 ; i++)
      {
          scanf("%d",&a);
          fprintf(fp1,"%d\n",a);
      }

}

