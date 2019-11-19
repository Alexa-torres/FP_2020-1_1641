#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv []){
//se declaran variables y asignan valor
double x=0;
//creando la estructura de repetición 
for (int i=1;i<argc;i++){
doble y=atof(argv[i]);
x=y+x;
}
//la operación para generar promedio
doble promedio=x/(argc-1);
printf("%.2lf\n",promedio);

return 0;
}
