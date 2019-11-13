#include <stdio.h>
#include <stdlib.h>//librerias
int main(int argc, char*argv[]){//poniendo la entrada
int x, sum;//declarando valores para el programa
x=atoi(argv[1]);
sum=0;
while(x!=0){//se comienza a realizar la funcion con while
sum=sum+(x%10); //se lleva a cabo la suma
x=(x/10);//division
}
printf("%i\n", sum);
return 0;
}
