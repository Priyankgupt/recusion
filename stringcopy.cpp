//copy one string into string
#include <stdio.h>
#include <stdlib.h>
void stringcopy(char *s1,char *s2,int i)
{
    if(s1[i]=='\0')
    {
    	s2[i]='\0';
    	return;
	}
	else
	{
		 s2[i]=s1[i];
         stringcopy(s1,s2,++i);
    }
}
int main()
{
    char s1[10],s2[10];
    int i;
    printf("Enter a string: ");
    gets(s1);
    stringcopy(s1,s2,0);
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
    return 0;
}
