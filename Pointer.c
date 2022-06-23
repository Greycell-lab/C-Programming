#include <stdio.h>
#include <stdlib.h>

void pointa(int *, int); //Dummy


int main()
{
    int array[] =  {4, 4, 3, 4, 3, 2, 4, 5, 4, 2};      //Zahlenarray in dem gesucht wird
    int *zeiger = &array;                               //Pointer auf den Speicher des Arrays
    int zahl;                                           //Variable für zu zählende Zahl
    printf("Die zu zählende Zahl eingeben: ");          //Die zu zählende Zahl
    scanf("%d", &zahl);                                 //Eingabe der Zahl
    pointa(zeiger, zahl);                               //Funktionsaufruf pointa-funktion
}

void pointa(int *zeiger, int zahl)                      //Funktion pointa der ein int-pointer und eine int-variable übergeben wird
{
    int z = 0;                                          //Variable für Indexüberprüfung
    int anzahl = 0;                                     //Variable zum Zählen im Array
    while(zeiger[z]!=NULL)                              //Schleife solange die im Array überprüfte Zahl NICHT GLEICH 0 ist
    {
        if(zeiger[z]==zahl)                             //Wenn die Überprüfte Zahl gleich der zu zählenden Zahl ist
        {
            anzahl++;                                   //Dann wird die Anzahl-variable um 1 erhöht
        }
        z++;                                            //Variable für Indexüberprüfung wird um 1 erhöht
    }
    printf("%d", anzahl);                               //Nach Ende der Schleife, Ausgabe der Anzahl der gezählten Zahl
}
