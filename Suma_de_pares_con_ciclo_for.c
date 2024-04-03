#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i, suma;
	suma=0;
	for (i=1; i<=10; i++){
		if (i % 2 == 0){
			suma = suma + i;
		}
	
	}
	printf("La suma es: %d", suma);
	return 0;
}

