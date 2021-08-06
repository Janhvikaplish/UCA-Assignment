/******************************************************************************

Q3. Implement the tower of hanoi function but instead of implementing the actual move function, just print the movement along with count of movements. 


*******************************************************************************/
#include <stdio.h>

int main() {
   towerOfHanoi(3,'A','C','B');
   return 0;
}


 void towerOfHanoi(int n, char from_rod,
                    char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("%c to %c\n",from_rod,to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("%c to %c\n",from_rod,to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 


