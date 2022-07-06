#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    struct tm
    {
        int h;
        int m;
        int s;
    };
    struct tm tm1;
    int m, h, d, y, rest;
    time_t tim;
    int choose;
    int fh, fm, fs, rh, rm, rs;
        system("cls");
        printf("1: Default Time to Shutdown - 16:15:00\n2: Choose Time to Shutdown\n");
        scanf("%d", &choose);
        if(choose == 1)
        {
            fh = 16;
            fm = 15;
            fs = 0;
        }
        else if(choose == 2)
        {
            system("cls");
            printf("     hh\n");
            printf("Time:");
            scanf("%d", &fh);
            system("cls");
            printf("     hh:mm\n");
            printf("Time:%02d:", fh);
            scanf("%d", &fm);
            system("cls");
            printf("     hh:mm:ss\n");
            printf("Time:%02d:%02d:", fh, fm);
            scanf("%d", &fs);
            system("cls");
            printf("Time:%02d:%02d:%02d\n", fh, fm, fs);
            if(fh>23 || fm>59 || fs>59)
            {
                printf("Wrong Time Input!");
                return 1;
            }
        }
        else
        {
            printf("Wrong Input!");
            return 1;
        }
    time(&tim);
    m = tim/60;
    h = m/60;
    d = h/24;
    rest = tim - d*(24*60*60);
    tm1.h = rest / 3600;
    rest = rest - tm1.h * 3600;
    tm1.m =  rest / 60;
    rest = rest - tm1.m * 60;
    tm1.s = rest;
    tm1.h += 2;
    rs = 60 - tm1.s;
    tm1.m++;
    if(tm1.m > fm)
    {
        rm = 60 - tm1.m + fm;
        tm1.h++;
    }
    else
    {
        rm = fm - tm1.m;
    }
    rh = fh - tm1.h;
    printf("Shutdown in: %02d:%02d:%02d\n", rh, rm, rs);
    int fsec = rh*3600+rm*60+rs;
    char cmdstop[512];
    char cmd[512];
    sprintf(cmdstop, "shutdown /a 2> nul");
    sprintf(cmd, "shutdown /s /t %d", fsec);
    system(cmdstop);
    system(cmd);
    sleep(2);
    return(0);
}
