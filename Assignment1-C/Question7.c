Write a program to print all input lines that are longer than 80 characters
Input: A text file with lines of varying length 
Output: print all lines with length greater than 

#include <stdio.h>
#define MAXLINE 1000

int get_line(char [], int);
void copy(char to[], char from[]);
 
int main() {
         int len;
         int max;
         char line[MAXLINE];
 
    max = 80;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            printf("%s", line);
        }
    }
    return 0;
}
 

int get_line(char s[], int lim) {
    int c, i;
    int j;
    j = 0;
    for (i = 0;(c=getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j++] = c;
        }
    }
    if (c == '\n') {
        s[j++] = c;
        ++i;
    }
    s[j] = '\0';
    return i;
}
