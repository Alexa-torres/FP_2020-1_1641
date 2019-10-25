#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* arg[]{
	//se debe de declarar otra lista para guardar la lista argu
	//declaramos la variable suma
	//argc se refiere a numero de argumentos
	int lista[argc],suma=0;
	//se indica que el promedio es un numero real porque el          resultado suele ser con decimales
	float promedio;
	//vamos a utilizar un for para copiar argu a lista
	//comenzamos en 1 y no en 0 porque argu[0] es ./main
	for (int i=1;i<argc;i++){
		lista[i]=atoi(argu[i]);
	}
	//ocupamos este for para sumar los elementos de la lista
	//primero suma=0 asi que la primera vez suma=lista[1]
	//si suma=lista[1] la segunda vez que haga el proceso sera 
	//suma=lista[1]+lista[2] y asi sucesivamente
	for (int i=1;i<argc;i++){
		suma=suma+lista[i];
	}
	//a la suma la divimos por argc-1 en el promedio
	//para que se pueda quitar el ./main y solo cuenten los numeros que entran
	promedio=(float)suma/(argc-1);
	printf("%f\n",promedio);
	return 0;
}
