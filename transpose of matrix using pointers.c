
#include <stdio.h>

int main()
{
    int a[10][10], i, j, r, c;
    int *p;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0];

    printf("Transpose of matrix:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", ((p + j) + i));
        }
        printf("\n");
    }

    return 0;
}
