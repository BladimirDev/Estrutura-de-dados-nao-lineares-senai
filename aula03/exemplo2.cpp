#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 3;
	int * p;
	p = &x;
	printf("Valor do ponteiro: %d\n", *p);
	printf("Endereco de x: %d", x);
	return 0;
}
