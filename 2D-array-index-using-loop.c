#include<stdio.h>

int main(){

    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];

    // for(int i=0;i<r;i++){    //row-each line
    //       for(int j=0;j<c;j++){
    //           scanf("%d %d",&i, &j);
    //       }
    // }

     for(int i=0;i<r;i++){    //column
          for(int j=0;j<c;j++){
              printf("%d %d \n",i,j);
          }
        //    printf("\n");
    }
     return 0;
}
