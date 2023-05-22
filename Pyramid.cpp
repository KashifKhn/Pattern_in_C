#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // for simple star pyramid * *** ***** *******
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - i || j >= rows + i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    // for simple number pyramid 1 2 3 4 5 6 7 8 9
    for (int i = 1; i <= rows; i++)
    {
        int k = 1;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - i || j >= rows + i)
                printf(" ");
            else
                printf("%d", k++);
        }
        printf("\n");
    }

    // for number pyramid 1 121 12321 1234321 123454321
    for (int i = 1; i <= rows; i++)
    {
        int k = 1;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - i || j >= rows + i)
                printf(" ");
            else
            {
                printf("%d",k);
                if (j < rows)
                    k++;
                else
                    k--;
            }
        }
        printf("\n");
    }

    // for number pyramid 1 212 32123 4321234 543212345
    for (int i = 1; i <= rows; i++)
    {
        int k = i;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - i || j >= rows + i)
                printf(" ");
            else
            {
                printf("%d",k);
                if (j < rows)
                    k--;
                else
                    k++;
            }
        }
        printf("\n");
    }

    // for number pyramid 1 232 34543 4567654 567898765
    for (int i = 1; i <= rows; i++)
    {
        int k = i;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j <= rows - i || j >= rows + i)
                printf(" ");
            else
            {
                printf("%d",k);
                if (j < rows)
                    k++;
                else
                    k--;
            }
        }
        printf("\n");
    }

    return 0;
}
