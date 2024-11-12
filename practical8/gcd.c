/*
Iterative and recursive version of Euclid's algorithm to calculate GCD of 2 positive numbers.
*/

#include<stdio.h>

int iterativeGCD(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int recursiveGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return (recursiveGCD(b, a%b));
    }
}

int main(void)
{
    int a, b, error;

    printf("Enter 2 positive integers: \n");
    error = scanf("%d %d", &a, &b);
    if(error != 2)
    {
        printf("Please enter 2 integers!!\n");
        return 1;
    }
    if(a <= 0 || b <= 0)
    {
        printf("Please enter positive integers!!\n");
        return 1;
    }

    printf("Iterative GCD(%d,%d) = %d\n", a, b, iterativeGCD(a,b));
    printf("Recursive GCD(%d,%d) = %d\n", a, b, recursiveGCD(a,b));
    return 0;
}

