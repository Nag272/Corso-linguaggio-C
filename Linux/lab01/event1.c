#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void){
	int8_t a = 6; 
	
	(a % 2 == 0)? printf("e' pari\n") : printf("e' dispari\n");
	return EXIT_SUCCESS; 
}

