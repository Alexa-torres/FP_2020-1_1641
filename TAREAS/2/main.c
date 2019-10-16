#include <stdio.h>
#include <stdlib.h>
// recibe un numero e indica si es par o non 
int main(int argc, char *argu [])
{
   int variable;
   variable= atoi(argu[1]);
   if (variable %2==0)
   {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}