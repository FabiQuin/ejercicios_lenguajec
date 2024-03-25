#include <stdio.h>

int main(int argc, char *argv[]) {
	char nombre[50];
	
	printf("Ingresa tu nombre\n");
	//scanf("%s",nombre);
	//gets(nombre);
	fgets(nombre,sizeof(nombre),stdin);
	printf("\n%s",nombre);
	return 0;
}

