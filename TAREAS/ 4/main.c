#include <stdio.h>
#include <stdlib.h>
float m;
float y=0;
float promedio;
//declarando las variables
int main(int argc, char const*argv[]){
	//construyendo la repeticion con for
	for (int i=0;i<argc;i++){
		m=atof(argv[i]);
		y=y+m;
	}
	//esta es la operacion para generar el promedio
	promedio=y/(argc-1);
	printf("%.2lf\n",promedio);
	return 0;
}
