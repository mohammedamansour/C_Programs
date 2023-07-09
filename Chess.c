#include <stdio.h>

    //this is the fonction that determines the color of the piece
    void color(int T[][50], int I, int J)
    {

        if (T[I][J] == 0)
        {
            printf("     ");
        }
        else if (I == 2 || I == 5 || I == 8 || I == 11 || I == 14 || I == 17 || I == 20 || I == 23)
        {
            if (T[I][J] == 1)
            {
                printf("White");
            }
            else if (T[I][J] == 2)
            {
                printf("Black");
            }
        }
    }


    void pieces(int T[][50], int I, int J)
    {
        if (T[I][J] == 0)
        {
            printf("     ");
        }
        else if (I == 1 || I == 4 || I == 7 || I == 10 || I == 13 || I == 16 || I == 19 || I == 22)
        {
            if (T[I][J] == 1)
            {
                printf("Rook ");
            }
            else if (T[I][J] == 2)
            {
                printf("knight");
            }
        }
    }


int main()
{
    int T[50][50]={0};
    T[5][7]=1;
    T[4][7]=1;
    T[8][5]=2;
    printf("\n\t\t\t\t\t\t      ");
    printf("CHESS");
    printf("\n\t\t\t\t");
    printf("+-----+-----+-----+-----+-----+-----+-----+-----+");
    for (int i = 1; i <= 23; i++)
    {
        if (i == 3 || i == 6 || i == 9 || i == 12 || i == 15 || i == 18 || i == 21)
        {
            printf("\n\t\t\t\t");
            printf("|-----|-----|-----|-----|-----|-----|-----|-----|");
        }
        else
        {
            printf("\n\t\t\t\t");
            for (int j = 1; j <= 8; j++)
            {
                printf("|");
                if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20 || i == 23)
                {
                    color(T, i, j);
                    if (j == 8)
                    {
                    printf("|");
                    }
                }
                else if (i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 || i == 19 || i == 22)
                {
                    pieces(T, i, j);
                    if (j == 8)
                    {
                    printf("|");
                    }
                }
            }
        }
    }
    printf("\n\t\t\t\t");
    printf("+-----+-----+-----+-----+-----+-----+-----+-----+");
    return 0;
}
