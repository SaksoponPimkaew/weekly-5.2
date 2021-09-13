#include<windows.h>
#include <stdio.h>
void gotoxy(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
    int x;
    scanf_s("%d", &x);
    if (x % 2 == 1)
    {
        for (int  i = 0; i <x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        for (int k = 1; k <= x; k++)
        {
            if (k == 1 )
            {
                gotoxy(x / 2 , k);
                printf("*");
            }
            if (k> 1 && k<= x/2 )
            {
                gotoxy(x / 2-k+1, k);
                printf("*");
                gotoxy(x / 2 + k-1, k);
                printf("*");
            }
            if (k == x / 2 + 1)
            {
                gotoxy(0, k);
                printf("*");
                gotoxy(x - 1, k);
                printf("*");
            }
                if (k> x/2 )
            {
                gotoxy(k-x/2-1, k);
                printf("*");
                gotoxy((x)-k+x/2, k);
                printf("*");
            }
            

        }

    }
    if (x % 2 == 0)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x-1; j++)
            {
                printf("-");
            }
            printf("\n");
        }
        for (int k = 1; k <= x; k++)
        {
            if (k == 1)
            {
                gotoxy(x / 2-1, k);
                printf("*");
            }
            if (k > 1 && k <= x / 2)
            {
                gotoxy(x / 2 - k , k);
                printf("*");
                gotoxy(x / 2 + k - 2, k);
                printf("*");
            }
            if (k == x / 2 + 1)
            {
                gotoxy(0, k);
                printf("*");
                gotoxy(x - 2, k);
                printf("*");
            }
            if (k > x / 2)
            {
                gotoxy(k - x / 2 - 1, k);
                printf("*");
                gotoxy((x)-k + x / 2-1 , k);
                printf("*");
            }


        }

    }
    gotoxy(x, x+2);
    return 0;
}
