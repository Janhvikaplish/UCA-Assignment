Write a C program to check if the given string is palindrome or not, considering only alphanumeric characters and ignoring cases
Input: str = “Never Odd or Even”
Output = true

#include <stdio.h>

int main()
{
    char s[1000];
    gets(s);
    int i=0,j=strlen(s)-1,b=-1;
        while(i<j)
        {
                if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                {
                        b=0;
                        if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))
                        {                        
                                if(s[i]!=s[j] && s[i]!=s[j]+32 && s[i]!=s[j]-32)
                                printf("false");
                                b=-1;
                        }
                        else if(s[j]>=48 && s[j]<=57)
                        {
                                if(s[i]!=s[j])
                                        printf("false");
                                b=-1;
                        }
                        j--;
                }
                else if(s[i]>=48 && s[i]<=57)
                {
                        b=0;
                        if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122) || (s[j]>=48 && s[j]<=57))
                        {
                                if(s[i]!=s[j])
                                printf("false");
                                b=-1;
                        }
                        j--;
                }
                if(b==-1)
                i++;
        }
        printf("true");
    return 0;
}

