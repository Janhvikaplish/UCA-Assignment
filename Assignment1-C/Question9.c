Write the function htoi(char* s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, 11 through f, and A through F
Input: “0xa”
Output: 10


#include<stdio.h>
#define MAX 100

#define YES 1
#define NO 0

int wgetline(char input[], int max);
int htoi(char s[]);

int main(void)
{
    char input[MAX];
    int value;

    wgetline(input, MAX);
    value=htoi(input);

    printf("The value of %s is %d",input,value);

    return 0;
}

int wgetline(char string[],int lim)
{
    int c,i;

    for(i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        string[i] =c;

    if(c=='\n')
    {
        string[i] =c;
        ++i;
    }
    string[i] = '\0';

    return i;
}

int htoi(char string[])
{
    int hex,i,idxhex,n;
    i = 0;
    if( string[i] == '0')
    {
        ++i;
        if(string[i] == 'x' || string[i] == 'X')
            ++i;
    }

    n = 0;
    idxhex = YES;

    for(;idxhex==YES;++i)
    {
        if(string[i] >='0' && string[i] <='9')
            hex= string[i] - '0';
        else if(string[i] >='a' && string[i] <='f')
            hex= string[i] -'a' + 10;
        else if(string[i] >='A' && string[i] <='F')
            hex= string[i] -'A' + 10;
        else
            idxhex = NO;

        if(idxhex == YES)
            n = 16 * n + hex;
    }
    return n;
}

