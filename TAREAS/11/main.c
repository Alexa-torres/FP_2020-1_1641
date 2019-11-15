#include <stdio.h>
#include <stdlib.h>//librerias
//se usara una funcion llamada raiz
double raiz(double num, double tolerancia, double resultado){//declaramos variables
	double division, diferencia;
	//aqui esta el algoritmo
	division=num/resultado;
	diferencia=resultado-division;
	//se hace que diferencia sea con valor absoluto
	diferencia=diferencia> 0? diferencia:-diferencia;
	//si la diferencia es menor o igual que la tolerancia se retorna
	//el candidato a resultado
	if(diferencia<=tolerancia){
		return resultado;
	}
	//si no
	else{
		//se obtiene un nuevo candidato
		resultado=(resultado+division)/2;
		//y se retorna la funcion con el nuevo candidato
		return raiz(num,tolerancia,resultado);
	}
}
int main(int argc, char*argu[]){//se declaran variables
double num,tolerancia,resultado;//los argumentos se gusrdan en estas variables
num=atof(argu[1]); tolrancia=atof(argu[2]); resultado=atof(argu[3]);
//en esta variable se guarda el resultado
resultado=raiz(num,tolrancia,resultado);
//se muestra
printf("%lf\n",resultado);
return 0;
}
