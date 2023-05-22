#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // for simple diamond * *** ***** ******* ***** *** *
    for (int i = 1; i <= 2*rows -1; i++)
    {
        int k = i <= rows ? i : 2*rows - i;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - k || j >= rows + k)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    // for simple number diamond 1 2 3 4 5 6 7 8 9
    for (int i = 1; i <= 2*rows -1; i++)
    {
        int k = i <= rows ? i : 2*rows - i;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - k || j >= rows + k)
                printf(" ");
            else
                printf("%d", k);
        }
        printf("\n");
    }

    // for number diamond 1 121 12321 1234321 12321 121 1  

    for (int i = 1; i <= 2*rows -1; i++)
    {
        int k = i <= rows ? i : 2*rows - i;
        int l = 1;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - k || j >= rows + k)
                printf(" ");
            else
            {
                printf("%d",l);
                if (j < rows)
                    l++;
                else
                    l--;
            }
        }
        printf("\n");
    }

    // for number diamond 1 212 32123 4321234 32123 212 1

    for (int i = 1; i <= 2*rows -1; i++)
    {
        int k = i <= rows ? i : 2*rows - i;
        int l = k;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - k || j >= rows + k)
                printf(" ");
            else
            {
                printf("%d",l);
                if (j < rows)
                    l--;
                else
                    l++;
            }
        }
        printf("\n");
    }
}