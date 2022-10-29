#include<stdio.h>
#include<string.h>
int main()
{
    int num=0 , vowel=0 , blank=0;
    char a[999];
    gets(a);
    int len = strlen(a);
    for(int i=0 ; i<len ; i++)
    {
        if(a[i]=='0' || a[i]=='1' ||a[i]=='2' ||a[i]=='3' ||a[i]=='4' ||a[i]=='5' ||a[i]=='6' ||a[i]=='7' ||a[i]=='8' ||a[i]=='9')
        {
         num++;
        }
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
        vowel++;
        }
        if(a[i]==' ')
        {
            blank++;
        }
    }
    printf("length of string = %d\nNumber = %d\ncharacter = %d\nvowel = %d",len,num,len-blank,vowel);
}
