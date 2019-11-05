#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	//toma valores necesarios como base y exponente
	int b= atoi(argv[1]); //base
	int e= atoi(argv[2]); //exponente
	int p= pow(b,e); //aqui se hace la operacion
	printf("%i\n",p);
	return 0;
}
