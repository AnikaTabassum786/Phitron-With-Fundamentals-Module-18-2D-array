#include <stdio.h>
#include <math.h>

int main()
{

    int r, c,n;
    scanf("%d", &n);
    r=n;
    c=n;
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sumPrimary = 0;
    int sumSecondary = 0;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    sumPrimary = sumPrimary + a[i][j]; // in primary diagonal
                }
                 if (i + j == r - 1)
                {
                    sumSecondary = sumSecondary + a[i][j]; //in secondary
                }
            }
        }
    }

    int totalSum= abs(sumPrimary-sumSecondary);
    printf("%d",totalSum);

    return 0;
}