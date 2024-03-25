#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1, numero2;
	
	numero1 = 10;
	numero2 = 20;
	
	if (numero1 > numero2) {
		printf("El numero 1 es mayor que el numero 2");
	}
	else if(numero2>numero1){
		printf("El numero 2 es mayor que el numero 1");
	}
	return 0;
}

