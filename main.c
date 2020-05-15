#include <stdio.h>


void main()
{
    int numOfRows;
    printf("Enter the number of the patterns:\n");
    scanf("%d", &numOfRows);

    int row, colSpace, colStar;
    for(row=1; row<=numOfRows; row++){
        for(colSpace=numOfRows-row;colSpace>=1;colSpace--){
            printf(" ");
        }
        for(colStar=1;colStar<=(row*2)-1; colStar ++){
            printf("*");
        }
        printf("\n");
    }

}

