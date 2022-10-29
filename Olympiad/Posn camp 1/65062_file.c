#include <stdio.h>
int main()
{ FILE *fp;
  int i,a;
      fp=fopen("d:\\001.txt","w");
      for(int i=0 ; i<10 ; i++)
      {
          scanf("%d",&a);
          fprintf(fp,"%d\n",a);
      }
      fclose(fp);

}

