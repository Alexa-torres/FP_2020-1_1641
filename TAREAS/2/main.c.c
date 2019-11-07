#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv []){
	int numero;
	//el argumento se guarda en esta variable
	numero=atoi(argv[1]);
	//se hace un if
	//si el modulo de num%2 es 0 es divisible entre 2
	if(numero%2==0){
	//se imprime uno porque es par 
	printf("1\n");
	}
	//si no significa que es non
	else{
	//se imprime 0 si es non
	printf("0\n");
	}
	return 0;
}
