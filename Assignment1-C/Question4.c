#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    int i=0;
    for(i=0;i<size;i++)
    scanf("%d",&array[i]);
    int temp=0;
    for(i=0;i<size/2;i++)
    {
        temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
    for(i=0;i<size;i++)
    printf("%d ",array[i]);

    return 0;
}

