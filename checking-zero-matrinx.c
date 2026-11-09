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

    int total_val = r * c;
    int zero_count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                zero_count++;
            }
        }
    }

    if(total_val==zero_count){
      printf("This is zero matrix");
    }else{
        printf("This is not zero matrix");
    }

    return 0;
}