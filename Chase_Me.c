#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
    {
    struct enemy
        {
        int x;
        int y;
        };
    int score = 0;
    int count;
    struct enemy e1;
    e1.x = 4;
    e1.y = 4;
    struct enemy e2;
    e2.x = 4;
    e2.y = 4;
    char field[5][5] = {{' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}};
    char ch;
    int x = 0;
    int y = 0;
    int game = 0;
    int r1;
    int r2;
    time_t t;
    srand((unsigned)time(&t));
    while(game==0)
        {
        system("clear");
        field[x][y] = 'X';
        field[e1.x][e1.y] = 'O';
        field[e2.x][e2.y] = 'O';
        printf("Score: %d\n", score);
        printf(" -------------------\n");
        printf("| %c | %c | %c | %c | %c | \n", field[0][0], field[0][1], field[0][2], field[0][3], field[0][4]);
        printf(" -------------------\n");
        printf("| %c | %c | %c | %c | %c | \n", field[1][0], field[1][1], field[1][2], field[1][3], field[1][4]);
        printf(" -------------------\n");
        printf("| %c | %c | %c | %c | %c | \n", field[2][0], field[2][1], field[2][2], field[2][3], field[2][4]);
        printf(" -------------------\n");
        printf("| %c | %c | %c | %c | %c | \n", field[3][0], field[3][1], field[3][2], field[3][3], field[3][4]);
        printf(" -------------------\n");
        printf("| %c | %c | %c | %c | %c | \n", field[4][0], field[4][1], field[4][2], field[4][3], field[4][4]);
        printf(" -------------------\n");
        if(field[x][y] == field[e1.x][e1.y] || field[x][y] == field[e2.x][e2.y])
            {
            printf("You got chasen! You LOST!");
            return 0;
            }
        printf("a: left\nd: right\nw: up\ns: down\n");

        while((ch=getchar())!='\n'&&ch!=EOF)
        {
        switch(ch)
            {
            case 'a': field[x][y] = ' ';if(y==0) y=4;else y--; break;
            case 'd': field[x][y] = ' ';if(y==4) y=0;else y++; break;
            case 's': field[x][y] = ' ';if(x==4) x=0;else x++; break;
            case 'w': field[x][y] = ' ';if(x==0) x=4;else x--; break;
            }
        }
        field[e1.x][e1.y] = ' ';
        field[e2.x][e2.y] = ' ';
        r1 = rand() % 4;
        r2 = rand() % 4;
        if(r1 == 0)
            {
            if(e1.x == 0)
                {
                e1.x = 4;
                }
            else
                {
                e1.x--;
                }
            }
        else if(r1 == 1)
            {
            if(e1.x == 4)
                {
                e1.x = 0;
                }
            else
                {
                e1.x++;
                }
            }
        else if(r1 == 2)
            {
            if(e1.y == 0)
                {
                e1.y = 4;
                }
            else
                {
                e1.y--;
                }
            }
        else
            {
            if(e1.y == 4)
                {
                e1.y = 0;
                }
            else
                {
                e1.y++;
                }
            }

        if(r2 == 0)
            {
            if(e2.x == 0)
                {
                e2.x = 4;
                }
            else
                {
                e2.x--;
                }
            }
        else if(r2 == 1)
            {
            if(e2.x == 4)
                {
                e2.x = 0;
                }
            else
                {
                e2.x++;
                }
            }
        else if(r2 == 2)
            {
            if(e2.y == 0)
                {
                e2.y = 4;
                }
            else
                {
                e2.y--;
                }
            }
        else
            {
            if(e2.y == 4)
                {
                e2.y = 0;
                }
            else
                {
                e2.y++;
                }
            }
        score++;
        }
    }
