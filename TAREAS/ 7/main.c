#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//declaramos variables
	int a;
	int b;
	int c=1;
	a=atof(argv[1]);
	b=atof(argv[2]);
	//decimos en donde lo vamos a guardar
	for(int i=0; i<b; i++){
	//decimos en donde se va a guardar y que se va a ir multiplicando
	c=c*a;
	}
	//imprimimos el resultado
	printf("%d\n", c);
	return 0;
}
