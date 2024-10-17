/*Scrivere un programma che letto due orari in ore, minuti e secondi restituisce quale orario viene prima.*/


#include <stdio.h>
int main(){
    int ora1, min1, sec1;
    int ora2, min2, sec2;
    printf("Inserisci il primo orario: ");
    scanf("%d%d%d", &ora1, &min1, &sec1);
    printf("Inserisci il secondo orario: ");
    scanf("%d%d%d", &ora2, &min2, &sec2);
    
//controllo orario 1

    if(ora1<=24 && ora1>=0 && min1<=60 && min1>=0 && sec1<=60 && ora1>=0)
        printf("l' orario1 è accettabile\n");
    else
        printf("l'orario1 non è accettabile\n");
     

// controllo orario 2
  if(ora2<=24 && ora2>=0 && sec1<=60 && ora1>=0 && sec2<=60 && sec2>=0)
        printf("l' orario2 è accettabile");
    else
        printf("l'orario2 non è accettabile");



        
        

}
    
