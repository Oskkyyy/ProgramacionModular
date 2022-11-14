//Programa para calcular equivalencias entre temperaturas Celcius, Farenheit y Kelvin.
#include <stdio.h>
//Calculo de temperatuta de Celcius a Farenheit y Kelvin
void celcius()
{
	float c,f,k;
	printf("Escribe la temperatura en grados Celcius:");
	scanf("%f",&c);

	f = (c*1.8)+32;
	printf("El equivalente en grados Fahrenheit es de: %f",f);
	k = c+273.15;
	printf("El equivalente en Kelvin es de: %f",k);
}
//Calculo de temperatura de Farenheit a Celcius y Kelvin
void fahrenheit ()
{
	float c2,f2,k2;
	printf("Escribe la temperatura en grados Farenheit:");
	scanf("%f",&f2);

	c2 = (f2-32)/1.8;
	printf("El equivalente en grados Celcius es de: %f",c2);
	k2 = 5*((f2-32)/9)+273.15;
	printf("El equivalente en Kelvin es de: %f",k2);

}
//Calculo de temperatura de Kelvin a Celcius y Farenheit
void kelvin ()
{
	float c3,f3,k3;
	printf("Escribe la temperatura en Kelvin:");
	scanf("%f",&k3);

	c3 = k3-273.15;
	printf("El equivalente en grados Celcius es de: %f",c3);
	f3 = 1.8*(k3-273.15)+32;
	printf("El equivalente en Fahrenheit es de: %f",f3);

}
int main ()

{
	char opc;
	printf("a)Equivalencias de Celcius a Fahrenheit y Kelvin\n");
	printf("b)Equivalencias de Fahrenheit a Celcius y Kelvin\n");
	printf("c)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
	printf("Elige una opcion\n");
	scanf("%c",&opc);

	switch (opc)
	{
		case 'a' : celcius();
			   break;
		case 'b' : fahrenheit();
			   break;
 		case 'c': kelvin();
			  break;
	}
	return 0;
}
