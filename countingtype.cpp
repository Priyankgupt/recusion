//counting types of characters in strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringcount(char *s)
{
	static int i,alphabets=0,digits=0,specialcharacters=0;
	if(!s[i])
    {
    	printf("Alphabets = %d\n",alphabets);
        printf("Digits = %d\n",digits);
        printf("Special characters = %d", specialcharacters);
        return;
    }
    else
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         specialcharacters++;
        i++;
         stringcount(s);
    }
}
int main()
{
    char s[1000];
    printf("Enter  the string: ");
    gets(s);
    stringcount(s);
 }
