#include <stdio.h>
#define <string.h>

void wieVieleWuerfel (){
    int wuerfel;
    printf("mit wie vielen Wuerfeln wollen Sie spielen? ");
    scanf("%i", wuerfel);
    return wuerfel;
}

int main(void){
    int wuerfelAnzahl;
    int wurfAnzahl = 2;
    int ergebnis = 0;
    int wurf = 0;
    srand(0);
    wuerfelAnzahl = wieVieleWuerfel(wurf);//wieVieleWuerfel funktion has no parameters.

    for(o=1; o <= wurfAnzahl; o++){
        printf("\n\nWurf Nr: %i \t %i \n", o);
        for (int i = 0; i <= wuerfelAnzahl; i)//i is not increasing
        {
            wurf = (rand() % 6) + 1;
            printf("Wuerfelzahl: \n",wurf);
            ergebnis == ergebnis + wurf;//vergleich operator - 
        }
        
    }
    printf("\n\nAnzahl Wuerfel: \t%i \nAnzahl Wuerfe:    \t%i \nPunkte insgesamt: \t%i\n\n", wurfAnzahl, wuerfelAnzahl, ergebnis);
    return 0;
}