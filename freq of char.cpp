//frequency of character

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char *s,char ch)
{
    static int i=0,c=0;
    if(!s[i])
    {
    	return c;
    }
    else
    {
        if(s[i]==ch)
    	{
  			c++;
		}
		i++;
		check(s,ch);
	}
}
int main()
{
    char s[10],ch;
	int c=0;
    printf("Enter a string : ");
    gets(s);
    printf("Enter character to be searched: ");
    ch=getchar();
    c=check(s,ch);
    printf("character '%c' occurs %d times \n ",ch,c);
	return 0;
 }
