#include<stdio.h>

int main(){

    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];

    scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[0][2]);

    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);
    scanf("%d", &a[1][2]);

    scanf("%d", &a[2][0]);
    scanf("%d", &a[2][1]);
    scanf("%d", &a[2][2]);

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);

    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);
    
    printf("%d ", a[2][0]);
    printf("%d ", a[2][1]);
    printf("%d ", a[2][2]);
   
    return 0;
}