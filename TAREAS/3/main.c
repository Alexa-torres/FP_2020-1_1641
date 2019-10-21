#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[])
{
	double n1, n2;
	n1=atof(argv[1]);
	n2=atof(argv[2]);
	
	printf("%.2lf\n", n1+n2);
	printf("%.2lf\n", n1-n2);
	printf("%.2lf\n", n1*n1);
	printf("%.2lf\n", n1/n2);
	
	return 0;
}