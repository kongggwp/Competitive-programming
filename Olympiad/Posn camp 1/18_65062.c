#include<stdio.h>
#include<string.h>
int main()
{
    char name[99] , surname[99] , gender[7] ,full[250];
    printf("Name : ");
    gets(name);
    printf("Surname : ");
    gets(surname);
    printf("Gender : ");
    gets(gender);
    if(strcmp(gender,"Male")==0)
    {
        strcpy(full,"Mr.");
    }
    if(strcmp(gender,"Female")==0)
        strcpy(full,"Mrs.");
        strcat(full,name);
        strcat(full," ");
        strcat(full,surname);
        printf("%s",full);
}
