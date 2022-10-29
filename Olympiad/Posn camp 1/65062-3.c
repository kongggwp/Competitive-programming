#include<stdio.h>
#include<string.h>

char* sum(char s1[] , char s2[])
{
  char temp[99999]="" , strsum[99999]="" , strsumreverse[99999];
  if(strlen(s1)>strlen(s2))
  {
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
  }

  int len1 = strlen(s1) , len2 = strlen(s2) ;
  int digitdiff = len2 - len1 ;
  int sum=0 , tod=0;

  for(int i=0 ; i<len1 ; i++)
    {
      sum = (s2[len1-1+digitdiff-i]-'0')+(s1[len1-1-i]-'0')+tod;
      strsum[i] = sum%10+'0';
      tod = sum/10;
    }

  for(int i=0 ; i<len2-len1 ; i++)
    {
      sum = (s2[len2-len1-1-i]-'0')+tod ;
      strsum[len1+i] = sum%10+'0';
      tod=sum/10;
    }
  if(tod==1)
  {
    strsum[len2] = '1';
  }
  int lensum = strlen(strsum);
  for(int i=0 ; i<lensum ; i++)
    {
      strsumreverse[i] = strsum[lensum-i-1];
    }
  return strsumreverse;
}


int main()
{
  int n;
  scanf("%d",&n);
  char s1[99999]="0" , s2[99999]="1" , s3[99999]="1";

  for(int i=3 ; i<=n ; i++)
    {
      strcpy(s1,s2);
      strcpy(s2,s3);
      strcpy(s3,sum(s1,s2));
    }
  printf("%s\n",s1);
  printf("%s\n",s2);
  printf("%s",s3);

}
