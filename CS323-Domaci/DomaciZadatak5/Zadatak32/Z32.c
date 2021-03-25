#define _CRT_SECURE_NO_WARNINS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
32. Napisati funkciju char * zameni3(char s[]) koja zamenjuje svaki karakter
stringa s sa 3 naredna karaktera po abecedi i tako dobijen string korišćenjem
dinamički alociranog niza vraća u glavni program. Na primer: string ANA treba
modifikovati u BCDOPQBCD.
Napisati potom program koji sa ulaza učitava 5 stringa maksimalne duzine 20
karaktera i ispisuje odgovarajuće modifikacije.
*/

char* zameni3(char s[]){
	int* velicina = malloc(3*(strlen(s)*sizeof(char)));
	char konacniString[*velicina];
	for(int i =0; i <strlen(s);i++){
		int ch = s[i];
		char pomString[3];
		pomString[0] = ch+1;
		pomString[1] = ch+2;
		pomString[2] = ch+3;
		strcat(konacniString, pomString);
	}
	strcpy(s,"");

	s = konacniString;
	return  s; 
 }

void main(){
	const int *velicinaString = malloc(20*sizeof(char));
	char str[*velicinaString];

	printf("Unesi string:\n");
	scanf("%s", str);
	printf("Vas novi string je: %s\n", zameni3(str));
		
	printf("Unesi string:\n");
	scanf("%s", str);
	printf("Vas novi string je: %s\n", zameni3(str));
	
	printf("Unesi string:\n");
	scanf("%s", str);
	printf("Vas novi string je: %s\n", zameni3(str));

	printf("Unesi string:\n");
	scanf("%s", str);
	printf("Vas novi string je: %s\n", zameni3(str));

	printf("Unesi string:\n");
	scanf("%s", str);
	printf("Vas novi string je: %s\n", zameni3(str));

}

