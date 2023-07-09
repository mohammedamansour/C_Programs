#include <stdio.h>


    // Restart the board
    void restart(int T[][50], int I, int J)
    {
        //Fill up black pieces
        T[1][1]=T[2][1]=   T[1][8]=T[2][8]=2;
        T[1][2]=T[2][2]=   T[1][7]=T[2][7]=4;
        T[1][3]=T[2][3]=   T[1][6]=T[2][6]=6;
        T[1][4]=T[2][4]=8; T[1][5]=T[2][5]=10;
        for(I=4;I<=5;I++)
        {
            for(J=1;J<=8;J++)
            {
                T[I][J]=12;
            }
        }
        //Fill up white pieces
        T[22][1]=T[23][1]=   T[22][8]=T[23][8]=1;
        T[22][2]=T[23][2]=   T[22][7]=T[23][7]=3;
        T[22][3]=T[23][3]=   T[22][6]=T[23][6]=5;
        T[22][4]=T[23][4]=7; T[22][5]=T[23][5]=9;
        for(I=19;I<=20;I++)
        {
            for(J=1;J<=8;J++)
            {
                T[I][J]=11;
            }
        }

    }


    //this is the function that determines the color of the piece
    void color(int T[][50], int I, int J)
    {

        if (T[I][J] == 0)
        {
            printf("     ");
        }
        else if (I == 2 || I == 5 || I == 8 || I == 11 || I == 14 || I == 17 || I == 20 || I == 23)
        {
            if (T[I][J] == 1||T[I][J] == 3||T[I][J] == 5||T[I][J] == 7||T[I][J] == 9||T[I][J] == 11)
            {
                printf("white");
            }
            else if (T[I][J] == 2||T[I][J] == 4||T[I][J] == 6||T[I][J] == 8||T[I][J] == 10||T[I][J] == 12)
            {
                printf("black");
            }
        }
    }


    //this is the function that determines the type of the piece
    void pieces(int T[][50], int I, int J)
    {
        if (T[I][J] == 0)
        {
            printf("     ");
        }
        else if (I == 1 || I == 4 || I == 7 || I == 10 || I == 13 || I == 16 || I == 19 || I == 22)
        {
            if (T[I][J] == 1||T[I][J] == 2)
            {
                printf("ROOK ");
            }
            else if (T[I][J] == 3||T[I][J] == 4)
            {
                printf("KNGHT");
            }
            else if (T[I][J] == 5||T[I][J] == 6)
            {
                printf("BSHOP");
            }
            else if (T[I][J] == 7||T[I][J] == 8)
            {
                printf("QUEEN");
            }
            else if (T[I][J] == 9||T[I][J] == 10)
            {
                printf("KING ");
            }
            else if (T[I][J] == 11||T[I][J] == 12)
            {
                printf("PAWN ");
            }
        }
    }


int main()
{
    int i=1, j=1, T[50][50]={0};
    printf("\n\t\t\t\t\t\t      ");
    printf("CHESS");
    printf("\n\t\t\t\t");
    printf("+-----+-----+-----+-----+-----+-----+-----+-----+     MADE BY <MOHAMMED AMANSOUR>");

    restart(T, i, j);

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
