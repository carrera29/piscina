
#include <stdio.h>

// Escribe una función ft_ultimate_div_mod que tenga el prototipo siguiente:
//
//Esta función divide los int apuntados por a y b.
//El resultado de la división se almacena en el int apuntado por a.
//El resultado del resto de la división se almacena en el int apuntado por b
//
//
void	ft_ultimate_div_mod(int *a, int *b)
{
	int resultado;
	int resto;

	resultado = *a / *b;
	resto = *a % *b;
	*a = resultado;
	*b = resto;
}

int	main(void)
{
	int a;
	int b;	

	a = 42; 
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("resultado: %d, resto: %d", a, b);
}
