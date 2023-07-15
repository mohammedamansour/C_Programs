#include <stdio.h>
#include <unistd.h>


    int player(int T[][8], int I, int J, int x1, int y1, int x2, int y2, int W)
    {
        //clear chosen piece
        if(x1==8)
        {
            x1=1;
        }
        else if(x1==7)
        {
            x1=4;
        }
        else if(x1==6)
        {
            x1=7;
        }
        else if(x1==5)
        {
            x1=10;
        }
        else if(x1==4)
        {
            x1=13;
        }
        else if(x1==3)
        {
            x1=16;
        }
        else if(x1==2)
        {
            x1=19;
        }
        else if(x1==1)
        {
            x1=22;
        }

        if(x2==8)
        {
            x2=1;
        }
        else if(x2==7)
        {
            x2=4;
        }
        else if(x2==6)
        {
            x2=7;
        }
        else if(x2==5)
        {
            x2=10;
        }
        else if(x2==4)
        {
            x2=13;
        }
        else if(x2==3)
        {
            x2=16;
        }
        else if(x2==2)
        {
            x2=19;
        }
        else if(x2==1)
        {
            x2=22;
        }

        T[x1][y1]=T[x1+1][y1]=0;
    }

    // Restart the board
    void restart(int T[][8], int I, int J)
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
    void color(int T[][8], int I, int J, int W)
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
    void pieces(int T[][8], int I, int J)
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
    int i=1, k, ax1, ax2, ay1, ay2, w=0, p=1, X1=0, Y1=0, X2=0, Y2=0, j=1, T[24][8]={0};
    restart(T, i, j);
    start :
    k=3;
    printf("\t\t\t\t\t\t\tCHESS\n\t\t\t\t  +-----+-----+-----+-----+-----+-----+-----+-----+     MADE BY <MOHAMMED AMANSOUR>");
    //Draw the table
    for (int i = 1; i <= 23; i++)
    {
        if (i == 3 || i == 6 || i == 9 || i == 12 || i == 15 || i == 18 || i == 21)
        {
            if(i==15)
            {
                if(w!=0)
                {
                    printf("\n  Warning:  \t\t\t");
                }
                else
                {
                    printf("\n\t\t\t\t");
                }
            }
            else
            {
                printf("\n\t\t\t\t");
            }
            if(i==15)
            {
                 printf("  |-----|-----|-----|-----|-----|-----|-----|-----|\t Chosen piece  [X: %d,Y :%d]", Y1, X1);
            }
            else
            {
                printf("  |-----|-----|-----|-----|-----|-----|-----|-----|");
            }
        }
        else
        {
            if(i==2)
            {
                printf("\n  Instructions:  \t\t");
            }
            else if(i==4)
            {
                if(p==1)
                {
                    printf("\n  Choose a piece to move...\t");
                }
                else if(p==2)
                {
                    printf("\n  Choose a desired square...\t");
                }

            }
            else if(i==16)
                {
                    if(w==1)
                    {
                        printf("\n  Choose A Valid Value! \t");
                    }
                    else
                    {
                        printf("\n\t\t\t\t");
                    }
                }
            else
            {
                printf("\n\t\t\t\t");
            }

            for (int j = 1; j <= 8; j++)
            {
                if (j == 1)
                {
                    if (i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 || i == 19 || i == 22)
                    {
                        printf("  ");
                    }
                }
                if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20 || i == 23)
                {
                    if (j==1&&i==2)
                    {
                        printf("8 ");
                    }
                    if (j==1&&i!=2)
                    {
                        printf("%d ", k-i+9);
                        k=k+2;
                    }
                }
                printf("|");
                if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20 || i == 23)
                {
                    color(T, i, j, w);
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
            if(i==16)
            {
                 printf("\t Chosen square [X: %d,Y :%d]", Y2, X2);
            }
        }
    }
    printf("\n\t\t\t\t");
    printf("  +-----+-----+-----+-----+-----+-----+-----+-----+");
    printf("\n\t\t\t\t");
    printf("    a(1)  b(2)  c(3)  d(4)  e(5)  f(6)  g(7)  h(8)\n");
    if(p==1)
    {
        printf("\t\t  X: ", Y1); scanf("%d",&Y1); printf("\t\t  Y: ", X1); scanf("%d",&X1);
        if (X1>8 || X1<0 || Y1>8 || Y1<0)
        {
            w=1;
            X1=ax1;Y1=ay1;
        }
        else
        {
            w=0;
            p=2;
        }
    }
    else if(p==2)
    {
        printf("\t\t  X: ", Y2); scanf("%d",&Y2); printf("\t\t  Y: ", X2); scanf("%d",&X2);
        if (X2>8 || X2<0 || Y2>8 || Y2<0)
        {
            w=1;
            X2=ax2;Y2=ay2;
        }
        else
        {
            w=0;
            p=1;
        }
    }
    player(T,i,j, X1, Y1, X2, Y2, w);
    ax1=X1;ay1=Y1;

    system("cls");
    goto start;
}
