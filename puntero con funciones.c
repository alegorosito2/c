#include <stdio.h>
#include <stdlib.h>

void cargar(int *p, int longitud){
	for(int i = 0; i<longitud; i++){
		p[i] = i*i;
	}
}
	
void mostrar(int *p, int longitud){
	for(int i = 0; i<longitud; i++){
		printf("%d\n", *(p+i));
	}
}
int main(int argc, char *argv[]) {

	int *p;
	long int longitud;
	printf("Cuantos elementos desea cargar: ");
	scanf("%ld", &longitud);
	
	p = malloc(longitud * sizeof(int));
	
	cargar(p, longitud);
	mostrar(p, longitud);
	free(p);
	return 0;
}

