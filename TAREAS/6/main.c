#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]{
int s=1; //aqui empece a mostrar que incio en 0
int r,j,k;//estas son las variables que se van a utilizar
for(int i=1;i<argc;i++){//aqui empezamo a mostrar
j=atoi(argv[i]);
s=s*j;
}
forint w=1;w<argc;w++){//aqui empezamos a checar
r=s/k;
printf("%i\n",r);
}
return 0;
}
