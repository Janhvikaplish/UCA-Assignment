/******************************************************************************

Q4. Print n times the every third element of the fibonacci series. (you can use iteration or recursion with memoization)


*******************************************************************************/
#include<stdio.h>


int a[20];


int recfib(int n)
{
    
    if(a[n] != -1)
        return a[n];

    a[n] = recfib(n-1) + recfib(n-2);
    return a[n];
} 
 
int main()
{   
    
    a[0] = 0;
    a[1] = 1;

   
    for(int i = 2; i < 20; i++)
        a[i] = -1;
    
    int n, c;
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for( c = 3 ; c <= n*3 ; c += 3 )
    {
      printf("%d ", recfib(c));
    } 
   return 0;
}
