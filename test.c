#include <stdio.h>

void modif_my_cha_var(char *cc, char ccc)
{
	*cc = 'O';
	ccc = 'L';
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';


	printf("*p= %p \n", p);
	printf("*p= %p \n", &p);
	printf("*c= %p \n", c);
	printf("*c= %p \n", &c);

	modif_my_cha_var(p, c);

	printf("*cc= %p \n", cc);
	printf("*cc= %p \n", &cc);
	printf("ccc= %p \n", ccc);
	printf("ccc= %p \n", &ccc);
	printf("*p= %p \n", p);
	printf("*p= %p \n", &p);
	printf("*c= %p \n", c);
	printf("*c= %p \n", &c);

	printf()
	return (0);
}
