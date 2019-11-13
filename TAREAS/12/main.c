#include <stdio.h>
#include <stdlib.h>//librerias
int APRETONES(int personas){//declaramos valores
int res;//valores
int z;//valores
if(personas==1){//se desarrolla la primer funcion
	return 0;
	}else{
		z=APRETONES(personas-1)+(personas-1);//operacion
	return z;
	}
}
int main(int argc, char*argv[]);//funcion
int a, ans;//declaramos valores
a=atoi(argv[1]);//se llava a cabo la funcion
ans=APRETONES(a);//se lleva a cabo la funcion
printf("%i\n",ans);
return 0;
}
