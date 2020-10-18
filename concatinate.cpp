//concatenate strings
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s1[10],s2[10];
    int i,j;
    printf("Enter string1: ");
    gets(s1);
    printf("Enter string2: ");
    gets(s2);
    j=strlen(s1);
    for(i=0;s2[i]!='\0';i++)
    {
    	s1[i+j]=s2[i];
	}
	s1[i+j]='\0';
    printf("combined two strings ='%s'\n",s1);
    return 0;
}
