#include <stdio.h>

int main(void)
{
    int n, i, j;
    int a[100][100];
    int sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    printf("Sum of primary diagonal elements = %d\n", sum);

    return 0;
}
