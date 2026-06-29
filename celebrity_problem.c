// celebrity problem.
#include <stdio.h>

int main()
{
    int a[3][3] = {
        {0,1,1},
        {0,0,1},
        {0,0,0}
    };

    int i, j, row, col;

    for(i=0; i<3; i++)
    {
        row = 0;
        col = 0;

        for(j=0; j<3; j++)
        {
            row += a[i][j];
            col += a[j][i];
        }

        if(row == 0 && col == 2)
        {
            printf("Celebrity = Person %d", i);
            return 0;
        }
    }

    printf("No Celebrity");

    return 0;
}