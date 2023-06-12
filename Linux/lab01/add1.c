#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define max 200


typedef struct lavagna{
	unsigned int8_t
		a,
		b;
	char 
		c[max];
}lavagnona;


int main(void){
	lavagnona x = {.a = 5, .b = 8}; 
	
	FILE *handle = fopen("./test.txt", "w");
	fwrite(handle, "%s", "test");
	fclose(handle);

	printf("%d + %d = %d\n", x.a, x.b, x.a + x.b);
	printf("programma che indovina la tua altezza");
	printf("inserire altezza: ");
	fgets(x.c, max, stdin);

	printf("La tua altezza e': %s", x.c);
	return EXIT_SUCCESS; 
}

