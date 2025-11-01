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

        printf("\n");
    }
    //walls==========================================================
    return 0;
}
