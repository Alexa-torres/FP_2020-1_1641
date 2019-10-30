#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* arg[]{
	//declarando variables y asignando valor
	double x=0;
	//construyendo la estructura de repeticion con for y convirtiendo argumentos a float
	for(int i=1; i<argc;i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	//haciendo la operacion para generar promedio
	double promedio=x//argc-1);
	printf("&.2lf\n", promedio);
	return 0;
}
