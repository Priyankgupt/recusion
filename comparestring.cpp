//compare strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stringcompare(char *s1,char *s2)
{
	int i=0,l1=strlen(s1),l2=strlen(s2),c=0;
    if(l1!=l2)
    {
       return 0;
	}
	else if(i<l1)
	{
         if(s1[i]==s2[i])
            c++;
            i++;
		stringcompare(s1,s2);
    }
    if(c==i)
    return 1;
    return 0;
}
int main()
{
    char s1[10],s2[10],c;
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    c=stringcompare(s1,s2);
    if(c)
        printf("strings are equal");
    else
        printf("Unequal strings");

	return 0;


 }
