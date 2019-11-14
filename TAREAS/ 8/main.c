#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	//declarando variables
	float a.b.c;
	//convirtiendo los argumentos y guardando en la variable flotante
	a=atof(argv[1]);
	b=atof(argv[2]);
	//mientras a sea igual a 1 se convierte, a grados C
	if(a==1){
		c=(b*1.8)+32;
		//mostrando el resultado
		printf("%.2f\n",c);
		return 0;
	}
	//si a vale 0 entonces se convierte, a grados F
	else
		if(a==0){
			c=(b-32)/1.8;
			//mostrando el resultado
			printf("%.2f\n",c);
			return 0;
		}
	return 0;
}
