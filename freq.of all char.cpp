#include<stdio.h>
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);
     return j;
}
void freqchar(char *s)
{
	int i,j,count=0,n;
    n=stringlength(s);
    printf(" frequency count character in string:\n");
    for(i=0;i<n;i++)
    {
     	count=1;
    	if(s[i])
    	{
          for(j=i+1;j<n;j++)
	      {
	    	if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }
            printf(" '%c' = %d \n",s[i],count);
         }
    }
}
 int main()
{
    char s[1000];
    printf("Enter  the string : ");
    gets(s);
    freqchar(s);
    return 0;
 }
