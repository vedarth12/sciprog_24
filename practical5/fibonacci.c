#include<stdio.h>
#include<stdlib.h>

void fib(int* a, int* b);

int main(void)
{
    int n;

    printf("\nEnter the number:");
    scanf("%d", &n);

    if(n<1)
    {
        printf("n must be greater than 1.\n");
        exit(1);
    }

    int f0  = 0;
    int f1 = 1;

    printf("\nThe Fibonacci Series: \n");
    printf("%d\t%d\t",f0,f1);

    for(int i=2; i<n+1; i++)
    {
        fib(&f1, &f0);
        printf("%d\t",f1);
    }
    printf("\n");

    return 0;

}

void fib(int* a, int* b)
{
    int next;
    next = *a + *b;

    *b = *a;
    *a = next;
}
