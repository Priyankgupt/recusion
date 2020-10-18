//counting number of words
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int wordcount(char *s)
{
    static int i,words=0;
    if(!s[i])
    {
       if(i>0)
      words++;
      return words;
	}
	else
	{
	   	if(s[i++]==32)
    	words++;
        wordcount(s);
 	}
}
int main()
{
    char s[10];
    int w;
    printf("Enter  the string: ");
    gets(s);
    w=wordcount(s);
    printf("no of words in string = %d\n",w);


 }
