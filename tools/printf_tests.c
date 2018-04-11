#include <stdio.h>


int	main(void)
{
	int	int_to_sign = -42;
	printf("\nint vers signed decimal\n");
	printf("===========================\n");
	printf("Decimal d:\t %10d\n", int_to_sign);
	printf("Decimal d sp 5:\t %10d\n", int_to_sign);
	printf("Decimal d pad 5:\t %5.5d\n", int_to_sign);
	printf("Decimal i:\t %10i\n", int_to_sign);


	int	int_to_dev = 18;
	printf("\nint vers unsigned octal, decimal and hexa\n");
	printf("=============================================\n");
	printf("int vers unsigned Octal (o):\t %10o\n", int_to_dev);
	printf("int vers unsigned Decimal (u):\t %10u\n", int_to_dev);
	printf("int vers unsigned Hexa (x):\t\t %10x\n", int_to_dev);
	printf("int vers unsigned Hexa Prefix (X):\t %10X\n", int_to_dev);

	double	argument = 123.459;
	printf("\ndouble types printings and formatting\n");
	printf("=========================================");
	printf("double with 6 default precis (e):\t %e\n", argument);
	printf("double with 2 precis (2e):\t %2e\n", argument);
	printf("double with expon (E):\t %E\n", argument);
	printf("double with p + e (10E):\t %10E\n", argument);
	printf("\n");
	printf("double in decimal (f):\t %10f\n", argument);
	printf("double in decimal (F):\t %10F\n", argument);
	printf("\n");
	printf("double in with trailing zeroes (g):\t %10g\n", argument);
	printf("double in with trailing zeroes (G):\t %10G\n", argument);
	printf("\n");
	printf("double to hexa (a):\t %10a\n", argument);
	printf("double to hexa (A):\t %10A\n", argument);
	printf("\n");

	int	c = 53;
	char	i = '5';
	char	*str = "stringo";
	void	*ptr = str;

	printf("ints, chars and strings\n");
	printf("=========================\n");
	printf("printing char with int (c):\t %10c\n", c);
	printf("printing char with char (c):\t %10c\n", i);
	printf("\n");
	printf("printing a char string (s):\t %10s\n", str);
	printf("\n");
	printf("printing void pointer adress (p):\t %10p\n", ptr);
	printf("\n");

	printf("misc\n");
	printf("======\n");
	printf("Print %% (%%)\n");
	printf("%%");

	return (0);
}

