#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d b=%d",a,b);   
    a=a+b;    
    b=a-b;    
    a=a-b;   
    printf("\nAfter swap a=%d b=%d",a,b);   

    return 0;
}
