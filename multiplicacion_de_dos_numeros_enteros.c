#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1, numero2,multiplicacion;	
	printf ("Ingresa el primer nunero entero\n");
	scanf ("%d",&numero1);
	
	printf ("Ingresa el segundo nunero entero\n");
	scanf ("%d",&numero2);
	
	multiplicacion = numero1 * numero2;
	printf ("El resultado de la multiplicacion es %d",multiplicacion);
	return 0;
}

//Ejercicio4_multiplicacion_de_dos_numeros
