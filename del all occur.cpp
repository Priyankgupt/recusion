//del all occurrences of character
#include <stdio.h>
#include <string.h>
void deletechar(char *s,char c)
{
	static int i=0,k=0;
     if(!s[i])
     {

	    return;
	 }
	 else
	 {
	 	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
	    i++;
	    deletechar(s,c);
	 }
}
int main()
{
    char s[10],c;
    printf("Enter a string : ");
    gets(s);
    printf("Enter character: ");
    c=getchar();
    deletechar(s,c);
    printf("string after removing all occurrences of character :'%c'\n",c);
    printf("%s",s);
	return 0;
}
