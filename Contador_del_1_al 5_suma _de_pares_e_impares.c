#include <stdio.h>

int main(int argc, char *argv[]) {
	//Con  el ciclo while realiza un ciclo del 1 al 5
	//suma los numeros pares y los numeros impares
	//al final muestra ambas sumas.
	
	int i, sumapares, sumaimpares, sumatotal;
	i = 1;
	sumapares = 0;
	sumaimpares = 0;
	sumatotal = 0;
	
		
	while (i <=5 ) {
		if (i % 2 == 0) {
			sumapares = sumapares + i;	
		}
		else if (i % 2 == 1){
			sumaimpares = sumaimpares + i;
		}
		
		i ++;
	}
		
	sumatotal = sumapares + sumaimpares;
		
	printf ("\nLa suma de los numeros pares es: %d", sumapares);	
	printf ("\nLa suma de los numeros impares es: %d", sumaimpares);
	printf ("\nLa suma total de los pares e impares es: %d", sumatotal);
		
	return 0;
}

