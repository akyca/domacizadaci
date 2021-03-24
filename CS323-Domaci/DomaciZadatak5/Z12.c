#include <stdio.h>
#include <stdlib.h>
#define MAXOS 2
#include <string.h>
/* 
12. Napisati program kojim se učitava niz struktura deklarisan sa:
Struct licnost osoba[MAXOS],*pok;
i ispisuje na dva načina. Prvo korišćenjem elemenata niza, a zatim korišćenjem
pokazivača koji se inicijalizuje adresom niza struktura. Struktura treba da sadrži
podatke: char ime[30], char adresa[50], unsigned starost
*/

struct licnost {
	char ime[30];
	char adresa[50];
	unsigned starost;
};
void ispisiNizom(struct licnost o[]){
	printf("Ispisivanje nizom\n");
	for(int i = 0; i < MAXOS;i++){
		printf("Ime: %s\n",o[i].ime);
		printf("Adresa: %s\n",o[i].adresa);
		printf("Starost: %d\n",o[i].starost);
		printf("\n");
	}

}
void ispisiPokazivacem(struct licnost *p){
	printf("Ispisivanje pokazivacem\n");
	for(int i =0; i < MAXOS; i++){
		printf("Ime: %s\n", (p+i)->ime);
		printf("Adresa: %s\n", (p+i)->adresa);
		printf("Ime: %d\n", (p+i)->starost);
		printf("\n");
	}
	
}
void main(){
	struct licnost osoba[MAXOS], *pok;
	strcpy(osoba[0].ime, "andrija");
	strcpy(osoba[0].adresa, "Dragise Cvetkovica");
	osoba[0].starost = 20;
	
	strcpy(osoba[1].ime, "Jovan");
	strcpy(osoba[1].adresa , "Visocka");
	osoba[1].starost = 20;
	
	ispisiNizom(osoba);
	pok = osoba;
	ispisiPokazivacem(pok);
}

