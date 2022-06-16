
/*	cuando añadimos "&" delante de una variable nos indica la direccción donde está alojada
	UN PUNTERO ES UNA VARIABLE QUE CONTIENE LA DIRECCION DE OTRA VARIABLE
	para definir un puntero: (tipo de variable)  int *...

	Los PUNTEROS en C nos van a servir para trasladar variables LOCALES a otras funciones

	int a;
	int *p; (creación de una variable de tipo puntero)
	
	a = 7;
	p = &a; 
	(cuando añadmos '&' delante de una variable nos indica la direccción en la que está)
	('p' apunta a 'a', con lo cual 'p' contiene la direccción de 'a') 
 	
 	*p (accede al valor de 'a') con lo cual:
	*p = 9; 
	a = 9; (en consecuencia cambio el valor de 'a') */


//intercambio de valor de 2 varibles a través de sus punteros:


#include <stdio.h>

void	ft_intercambia(int *x, int *y) //declaro que recibe dos varaibles int de tipo puntero
{
	int z; //creo un variable que sirve de contenedor 

	z = *x; //el intercambio se produce de derecha a izquierda
	*x = *y; //el valor de 'b' se transfiere al puntero de 'a'
	*y = z; //la dirección de 'b' ha quedado vacía y le tranfiero el valor de 'z' que es el de 'a'
}

int	main(void)
{
	int a;
	int b;

	a = 3;
	b = 7;
	printf("a=%d b=%d\n", a, b);
	ft_intercambia(&a, &b); //lleva '&' para referirnos a que se trata de la dirección de a y b
	printf("a=%d b=%d\n", a, b);
}
