#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int factorial (int x);

int main(void)
{
    int order;
    double e, *terms;

    printf("Please enter the order:\n");
    scanf("%d", &order);

    terms = (double *)malloc(order * sizeof(double));

    for (int i = 0; i < order; i++)
    {
        terms[i] = 1.0 / (double)factorial(i+1);
    }

    e = 1.0;
    for (int i = 0; i < order; i++)
    {
        e = e + terms[i];
    }

    free(terms);

    printf("e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));

    return 0;
}

int factorial (int x)
{
    if (x<0)
    {
        printf("Must be a positive number\n");
        return -1;
    }
    else if(x==0)
    {
        return 1;
    }
    else
    {
        return (x * factorial(x - 1));
    }

}
