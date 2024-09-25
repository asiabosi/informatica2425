/* ESERCIZIO
calcola l'area di un triangolo
inserendo la base el' altezza

*/
#include <stdio.h>

int main(){
	float base,altezza,area;
	base=0;
	altezza=0;
	area=0
	printf("inserisci la base: ");
	scanf("%f",&base);
	printf("inserisci l'altezza:");
	scanf("%f",&altezza);
	area = (base*altezza)/2;
	printf("l'area vale: %f", area);

}
