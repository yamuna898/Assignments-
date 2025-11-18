#include <stdio.h>
int main(){
    //roof===========================================================row=6
    int row=6;
    for (int i = 0; i < row; i++)
    {
        //starting spaces--------------------------------------------
        for (int j = 0; j < 2 * (row - i) - 1; j++)
        {
            printf(" ");
        }
        //right angle tringle----------------------------------------
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        //rectangle--------------------------------------------------
         for (int j = 0; j < row*2; j++) {
            printf("* ");
        }
        //left angle triangle----------------------------------------
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    //walls==========================================================row=12,noofstarineachrow=21
    int rows=12,fullCols=21,j;
    for (int i = 1; i <= rows; i++) {
        if (i <= 4) {
            // first full 4 rows
            for (j = 1; j <= fullCols+4; j++)
                printf("* ");
        }
        else if (i <= 8) {
            //windows
            for (j = 1; j <= 4; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 9; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 4; j++) printf("* ");
        }
        else if (i <= 10) {
            //2 full rows
            for (j = 1; j <= fullCols+4; j++)
                printf("* ");
        }
        else {
            //door + a border(deco)
            for (j = 1; j <= 8; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 8; j++) printf("* ");
            printf("\n");
            for (j = 1; j <= 8; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 8; j++) printf("* ");
            printf("\n");
            for (j = 1; j <= 8; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 8; j++) printf("* ");
            printf("\n");
            for (j = 1; j <= 8; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 8; j++) printf("* ");
            printf("\n");
            for (j = 1; j <= 8; j++) printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            printf("* ");
            for (j = 1; j <= 4; j++) printf("  ");
            for (j = 1; j <= 8; j++) printf("* ");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
