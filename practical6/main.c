#include <stdio.h>

//Function Prototype
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main()
{
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            A[i][j] = i+j;
        }
    }

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            B[i][j] = i-j;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            C[i][j] = 0.0;
        }
    }   

    //Perform Matrix Multiplication
    matmult(n,p,q,A,B,C);

    printf("\nMatrix A:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%3.0f\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%3.0f\t", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix C:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%3.0f\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
