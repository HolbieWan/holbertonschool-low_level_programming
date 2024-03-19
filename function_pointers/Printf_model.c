#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char op;
	int (*func)(int, int);
}op_func;

int add(int a, int b);
int soust(int a, int b);
int mult(int a, int b);
int divide(int a, int b);

op_func ops [] = {
	{'+', add},
	{'-', soust},
	{'*', mult},
	{'/', divide},
};

int main( int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	char operation = argv[3][0];
	int result;
	int i;

	if (argc != 4)
		printf("Entrez le nombre correct d'arguments: %s\n", argv[0]);
		return (1);
	for (i = 0; ops[i].f != NULL; i++)
	{
		if (ops[i].op == operation)
		{
			int result = ops[i].func(num1, num2);
			printf("result is: %d\n", result);
			return 0;
		}
	}
	printf("operation non valide");
	return (3);
}

int add(int a, int b) {return (a + b);}
int soust(int a, int b) {return (a - b);}
int mult(int a, int b) {return (a * b);}
int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Can not devide by zero");
		exit(100);
	}
	else
		return (a / b);
};

