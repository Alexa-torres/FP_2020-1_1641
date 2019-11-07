#include <stdio.h>
#include <stdlib.h>
int main (int argc, char const * argv[])
{
	//primero se declaran las variable necesarias, la de los numeros y la de las operaciones
	float n1,n2;
	//se guarga el argu[1] en una variable e igual con argu[2]
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	float suma, resta, multiplicacion, division;
	//se le asigna el valor a las variables de las operaciones
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion = n1*n2;
	division = n1/n2;
	printf("%.2f\n",suma);
	printf("%.2f\n",resta);
	printf("%.2f\n",multiplicacion);
	printf("%.2f\n",division);
	return 0;
}
