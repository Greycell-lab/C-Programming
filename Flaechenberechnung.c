#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Rechteck(double *, double *);
double Quadrat(double *);
double Kreis(double *, double *);

int main()
{
    int auswahl;
    double a;
    double b;
    double r;
    double *as = &a;
    double *bs = &b;
    double *rs = &r;
    double pi = 3.14;
    double *pis = &pi;
    double result;
    bool menu = true;
    while(menu == true)
    {
        printf("------Flächenberechnung------\n");
        printf("---------1: Rechteck---------\n");
        printf("---------2: Quadrat----------\n");
        printf("---------3: Kreis------------\n");
        printf("Auswahl: ");
        scanf("%d", &auswahl);
        switch(auswahl)
        {
            case 1:
            {
                printf("Seite a: ");
                scanf("%lf", &a);
                printf("Seite b: ");
                scanf("%lf", &b);
                result = Rechteck(as, bs);
                printf("%lf\n", result);
            }
            case 2:
            {
                printf("Seite a: ");
                scanf("%lf", &a);
                result = Quadrat(as);
                printf("%lf\n", result);
            }
            case 3:
            {
                printf("Radius: ");
                scanf("%lf", &r);
                result = Kreis(rs, pis);
                printf("%lf", result);
            }
            default: printf("Falsche Eingabe\n");
        }
    }

}

double Rechteck(double *a, double *b)
{
    return *a * *b;
}

double Quadrat(double *a)
{
    return *a * *a;
}

double Kreis(double *r, double *pi)
{
    printf("%lf, %lf", *r, *pi);
    return *r * *r * *pi;
}
