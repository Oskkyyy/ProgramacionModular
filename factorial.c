// Funcionamiento de un factorial
#include <stdio.h>
	int factorial (int n)
{
//Se declara la variable f de tipo entero
	long int f;
	//Se impone la condicion, si n es igual a cero f adquiere el valor de uno
		if(n==0)
	{
	       	f=1;
	}
	else
		//De otra manera, f tendra el valor de n por el resultado de la funcion factorial con n-1
	{	
		f=n*factorial(n-1);
	}
	return f;
}
int main() //Funcion principal, se escribe el numero que se desea obtener el factorial y se obtienen los argumentos para la funcion recursiva de factorial
{
	int fact;
	int n;
	printf ("\n Dame un numero:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\n El factorial =%d \n",fact);
	return 0;
}
