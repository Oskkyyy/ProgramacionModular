//Programa para el calculo del area de un cuadrado o rectangulo
#include <stdio.h>

//Calculo de area de un cuadrado
void cuadrado()
{
	int  l;
	float a;
	printf("Escribe la longitud del lado del cuadrado:");
	scanf("%d",&l);

	a = (l*l);
	printf("El area del cuadrado es: %f",a);
}
//Calculo de area de un rectangulo
void rectangulo ()
{
	int base, alt;
	float a2;
	printf("Escribe la longitud de la base:");
	scanf("%d",&base);
	printf("Escribe la longitud de la altura:");
	scanf("%d",&alt);
	a2 = base*alt;
	printf("El area del rectangulo es: %f",a2);
}
//Calculo de area de un trapecio
void trapecio ()
{
	int bMay, bMen, alt2;
	float a3;
	printf("Escribe la longitud de la base menor:");
	scanf("%d",&bMen);
	printf("Escribe la longitud de la base mayor:");
	scanf("%d",&bMay);
	printf("Escribe la longitud de la altura:");
	scanf("%d",&alt2);
	a3 = (((bMay+bMen)*alt2)/2);
	printf("El area del trapecio es: %f",a3);

}
int main ()

{
	char opc;
	printf("a)Area de un rectangulo\n");
	printf("b)Area de un cuadrado\n");
	printf("c)Area de un trapecio\n");
	printf("Elige una opcion\n");
	scanf("%c",&opc);

	switch (opc)
	{
		case 'a' : rectangulo();
			   break;
		case 'b' : cuadrado();
			   break;
 		case 'c': trapecio();
			  break;
	}
	return 0;
}
