#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	
	numero = 0;
	
	if (numero > 0) {
		printf ("El numero es positivo");
		
	}
	else if (numero < 0){
		printf ("El numero es negativo");
	}
	else if (numero == 0){
		printf("El numero es nulo / cero");
	}
	return 0;
}

