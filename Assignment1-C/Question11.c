Write the function any( char* s1 , char* s2), which returns the first location in the string1 where any character from the string2 occurs, or  -1 if s1 contains no characters from s2
Input: s1 = “abcd” s2 = “kd”
Output: 3

Input: s1 = “abcd” s2 = “kz”
Output: -1



#include<stdio.h>
#define MAXLINE 1000

int mgetline(char line[],int maxline);
int any(char s1[],char s2[]);

int main(void)
{
    char s1[MAXLINE],s2[MAXLINE];
    int val;
    
    /* Give the first string s1 */
    
    mgetline(s1,MAXLINE);
    
    /* Give the second string s2 */

    mgetline(s2,MAXLINE);

    val = any(s1,s2);

    printf("%d",val);

    return 0;
}

int mgetline(char s[],int lim)
{
    int i,c;
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
        s[i]=c;

    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
}

int any(char s1[],char s2[])
{
    int i,j,check;

    checkr=1;

    for(i=0;s1[i]!='\0'&& (check);) 
    {
        
        for(j=0;s2[j]!='\0'&& (s1[i]!=s2[j]);++j) 
            ;

        if(s2[j]=='\0') {
            check=1;
            i++;
        }
        else
            check=0; 
    }

    if(s1[i]=='\0')
        return -1;
    else
        return i;
}

