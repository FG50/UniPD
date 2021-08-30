
#include <stdio.h>
#include <math.h>
#define FORMULA_MORTAGE_NUMERATORE pow (1 + ipercentuale , numerorate)

int main(void)
{

    float capitaleiniziale,i,ipercentuale,rataprestito,totaleinteressi;
    int numerorate;
    printf("Inserisci il valore del prestito:  \n");
     scanf("%f", &capitaleiniziale);
    
    printf("Inserisci il numero di rate:  \n ");
     scanf("%d", &numerorate);
    
    printf("Inserisci il tasso di interesse:  \n");
     scanf("%f", &i);
    
        
   ipercentuale = i/1200; // 100 * 12 mesi
    
    FORMULA_MORTAGE_NUMERATORE;
    rataprestito = (capitaleiniziale * ipercentuale * FORMULA_MORTAGE_NUMERATORE) / ( FORMULA_MORTAGE_NUMERATORE - 1);

// formula per la rata in questo caso mensile del prestito.
    
    printf("La tua rata mensile è: %.3f\n\n" , rataprestito);
    
    totaleinteressi = (rataprestito * numerorate) - (capitaleiniziale);
    
    printf(" Il totale degli interessi ammonta a: %1.f\n\n" , totaleinteressi);
    
    
    return 0;
    
    
}
