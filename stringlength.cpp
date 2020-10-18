#include <stdio.h>
#include <stdlib.h>
int strings(char *s,int i)
{
    if(s[i]=='\0')
     return i;
    strings(s,++i);

}
int main()
{
    char s[1000];
    int l;

    printf("Enter a string: ");
    gets(s);
    l=strings(s,0);
    printf("Length of '%s'= %d",s,l);

    return 0;
}
