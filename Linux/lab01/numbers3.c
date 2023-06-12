#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void){
	int 
		i = 0,
		a = 6; 
	do{
		printf("%d\n", i);
		++i;
	}while(i <= 5);
	
	printf("\n");
	return EXIT_SUCCESS; 
}

