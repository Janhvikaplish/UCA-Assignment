Write the function strrindex( char* s , char* t ) which returns the position of the rightmost occurrence of t in s , or - 1 if there is none
Input: s = “abkdcdddkd” t = “kd”
Output: 8

Input: s = “abcd” t = “kd”
Output: -1




#include<stdio.h>

int strrindex(char source[],char searchfor[]);

int main(void)
{
    char line[1000];
    gets(line);
    char pattern[1000];
    gets(pattern);
    int found;

    /* It should match the a the 7th position. */

    found = strrindex(line, pattern);

    printf("Found the right index: %d\n", found);

}

int strrindex(char s[],char t[])
{
    int i,j,k, result;

    result = -1;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++)
            ;
        if(k>0 && t[k] == '\0')
            result = i;
    }
    return result;
}

