/******************************************************************************
Q2.   Given 2 numbers, find GCD (greatest common divisor). Implement using recursion.  Example: GCD(10,15) = 5


*******************************************************************************/
#include <stdio.h>
int gcd(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int gcd(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

