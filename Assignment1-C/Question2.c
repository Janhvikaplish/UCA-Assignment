#include <stdio.h>

int main()
{
    int i;
    int j;
    int size;
    scanf("%d",&size);
    int space=size-1;
    /*run loop (parent loop) till number of rows*/
    for(i=0;i<size;i++)
    {
	    /*loop for initially space, before star printing*/
	    for(j=0;j< space;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("# ");
	    }
		
	    printf("\n");
	    space--;	/* decrement one space after one row*/
    }  

    return 0;
}
