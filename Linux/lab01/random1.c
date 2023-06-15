#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


/*
 *
 *	prima di cominciare il programma mi assicuro che la macro
 *	MAX non sia già stata definita all'interno di una libreria
 *	che ho importato, in caso che è gia stata usata uso #error
 *	per interrompere la compilazione
 *
*/


#ifndef MAX
	short unsigned int corrispondenza(short unsigned int [], short unsigned int);
	#define MAX 10
#else
	#error
#endif


int main(int argc, char *argv[], char *getenv[]){

	setlocale(LC_CTYPE, " ");

		/*	OPERATORE SIZEOF	*/
	/*
	 *	sizeof() e' un operatore aritmetico che restituisce
	 *	il numero di byte che costituisce un tipo di dato.
	 * 
	*/

	printf("sizeof(char): %ld\n", sizeof(char)); // il tipo char e' 1 byte
	printf("sizeof(int): %ld\n", sizeof(int));   // il tipo int e' 4 byte
	printf("sizeof(long int): %ld\n", sizeof(long int));


			/*	NUMERI RANDOM	*/
	// uso srand(time(NULL)) per fare in modo che ad ogni esecuzione del programma
	// mi dia sempre numeri diversi
	srand(time(NULL));

	short unsigned int 
		r,
		elemento = 20,
		array[MAX] = {0}; 
	// inizializzo un array di interi con 
	// grandezza MAX e tutti gli elementi a zero

	// uso un unsigned. considero quindi solo i numeri positivi 
	// (da 0 a max numeri per short int * 2)
	for(short unsigned int i = 0; i != MAX; i++){
		r = rand() % 30 + 1; // numeri "causali" che vanno da 1 a 30
		printf("numero random: %d\n", r);
		array[i] = r;
	}

			/*	RICERCA ELEMENTI IN ARRAY	*/
	if(corrispondenza(array, elemento) == 1)
		printf("\nc'è corrispondenza\n");
	else
		printf("\nnessuna corrispondenza\n");


	return EXIT_SUCCESS;
}


short unsigned int corrispondenza(unsigned short int array[], unsigned short int elemento){
	for(unsigned short int i = 0; i != MAX; i++)
		if(array[i] == elemento)
			return 1;
	return 0;
}
