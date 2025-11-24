// #include <stdio.h>
// int main(){
//     //roof===========================================================row=6
//     int row=6;
//     for (int i = 0; i < row; i++)
//     {
//         //starting spaces--------------------------------------------
//         for (int j = 0; j < 2 * (row - i) - 1; j++)
//         {
//             printf(" ");
//         }
//         //right angle tringle----------------------------------------
//         for (int k = 0; k <= i; k++)
//         {
//             printf("* ");
//         }
//         //rectangle--------------------------------------------------
//          for (int j = 0; j < row*2; j++) {
//             printf("* ");
//         }
//         //left angle triangle----------------------------------------
//         for (int k = 0; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     //walls==========================================================row=12,noofstarineachrow=21
//     int rows = 12, fullCols = 21, j;

// for (int i = 1; i <= rows; i++) {

//     if (i <= 4) {
//         // first 4 full rows
//         for (j = 1; j <= fullCols + 4; j++)
//             printf("* ");
//     }

//     else if (i <= 8) {
//         // windows
//         for (j = 1; j <= 4; j++) printf("* ");
//         for (j = 1; j <= 4; j++) printf("  ");
//         for (j = 1; j <= 9; j++) printf("* ");
//         for (j = 1; j <= 4; j++) printf("  ");
//         for (j = 1; j <= 4; j++) printf("* ");
//     }

//     else if (i <= 10) {
//         // 2 full rows
//         for (j = 1; j <= fullCols + 4; j++)
//             printf("* ");
//     }

//     else {
//         // bottom 5 rows loop
//         for (int k = 1; k <= 5; k++) {
//             for (j = 1; j <= 8; j++) printf("* ");
//             for (j = 1; j <= 4; j++) printf("  ");
//             printf("* ");
//             for (j = 1; j <= 4; j++) printf("  ");
//             for (j = 1; j <= 8; j++) printf("* ");
//             printf("\n");
//         }
//         break; // prevent extra prints after finishing all 5 rows
//     }

//     printf("\n");
// }
//     return 0;
// }


#include <stdio.h>

void stars(int n){ for(int i=0;i<n;i++) printf("* "); }
void spaces(int n){ for(int i=0;i<n;i++) printf("  "); }

int main(){
    int S;
    printf("Enter house size: ");
    scanf("%d",&S);

    int roofRows = S;
    int wallRows = S + 4;
    int fullCols = (S*4);

    int windowRows = S/2;
    if(windowRows < 1) windowRows = 1;

    int doorSize = S/2;
    if(doorSize < 2) doorSize = 2;

    // ========================= ROOF =========================
    for(int i=0;i<roofRows;i++){

        // left padding
        for(int j=0;j<2*(roofRows-i)-1;j++) printf(" ");

        // left triangle
        for(int k=0;k<=i;k++) printf("* ");

        // middle rectangle
        for(int j=0;j<roofRows*2;j++) printf("* ");

        // right triangle
        for(int k=0;k<=i;k++) printf("* ");

        printf("\n");
    }

    // ========================= WALLS =========================

    int winStart = 3;
    int winEnd   = winStart + windowRows - 1;

    int doorStart = wallRows - doorSize;

    for(int i=1;i<=wallRows;i++){

        // Full row (top rows)
        if(i <= 2){
            stars(fullCols);
        }

        // Window rows
        else if(i >= winStart && i <= winEnd){

            int block = S;
            int gap   = S/2;
            int mid   = fullCols - 2*block - 2*gap;

            stars(block);
            spaces(gap);
            stars(mid);
            spaces(gap);
            stars(block);
        }

        // Middle full rows
        else if(i < doorStart){
            stars(fullCols);
        }

        // Door rows
        else {
            int side = (fullCols - doorSize)/2;

            stars(side);
            stars(doorSize);
            stars(side);
        }

        printf("\n");
    }

    return 0;
}
