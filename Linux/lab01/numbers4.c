#include <stdio.h>
#include <stdlib.h>

int is_prime(int n);


int main(void){
	int 
		n = 7;
	
	(is_prime(n))? printf("\n%d e' primo\n", n) : printf("\n%d non e' primo\n", n);

	return EXIT_SUCCESS; 
}


int is_prime(int n){
	for(int i = 2; i <= n / 2 + 1; i++)
		return (n % i == 0)? 0 : 1;
}
