#include<stdio.h>
#include<string.h>
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);
	 return j;
}
void deletechar(char *s,char c)
{
	static int i,temp=1,n=stringlength(s);
     if(i<n)
     {
	  if(temp)
        {
          	 if(c==s[i])
          	{
				temp=0;
				 s[i]=s[i+1];
            }
	    }
	    else
	     s[i]=s[i+1];
	    i++;
		deletechar(s,c);
	}
}
int main()
{
    char s[1000],c;
    printf("Enter the string : ");
    gets(s);
    printf("Enter character: ");
    c=getchar();
    deletechar(s,c);
    printf("%s",s);
    return 0;
 }
