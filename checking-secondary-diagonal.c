#include <stdio.h>

int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag=1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j == r-1)
                {
                    // in secondary diagonal
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag=0;
                        printf("Not Diagonal");
                    }
                }
            }
        }

        if(flag==1){
            printf("Diagonal");
        }
    }
    else
    {
        printf("Not Diagonal");
    }

    return 0;
}