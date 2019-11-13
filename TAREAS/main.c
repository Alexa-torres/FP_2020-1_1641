#include <stdio.h>
#include <stdlib.h>//librerias
#include <math.h>
double RAIZ(doublex, double tol, double candidato){//declaramos variables
	double division, diferencia, promedio;//operacion
	division=x/candidato;
	diferencia=fabs(division-candidato);//es la division que se llevara a cabo
	while(diferencia>tol){//la operacion del diferencial y el total
	division=x/candidato;
	diferencia=fabs(division-candidato);//se lleva a cabo la operacion
	promedio=(candidato+division)2;)//se saca el promedio
	candidato=promedio;//la igualdad de ambos
	}
	return candidato;
}
int main(int argc, char*argv[]){//se declaran variables
double numero,tolerancia,ans,candidato;//valores
numero=atof(argv[1]);//operacion
candidato=atof(argv[3]);//operacion
tolerancia=atof(argv[2]);//operacion
ans=RAIZ(numero,tolerancia,candidato);//la raiz toma los resultados
printf("%lf\n",ans);//operacion
return 0;
}
