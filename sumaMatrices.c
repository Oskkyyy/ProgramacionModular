//Programa para sumar matrices
#include <stdio.h>
void sumaMatriz(int t, int a[][10],int b[][10],int c[][10])
{
	for (int i=0;i<t;i++)
	{

		for (int j=0;j<t;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d", c[i][j]);
		}
	}
}
void tecleeMatriz(int t, int a[][10],int b[][10])
{
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<t;j++)
		{
			printf("Ingrese el valor de la matriz a posicion[%d],[%d]",i,j);
			scanf("%i",&a[i][j]);
			printf("Ingrese el valor de la matriz b posicion [%d],[%d]",i,j);
			scanf("%i",&b[i][j]);
		}
	}
}
int main ()
{
int t, a[10][10], b[10][10], c[10][10];
			printf("Teclee tamañano de la matriz /n");
			printf("/n");
			scanf("%d",&t);
		       	tecleeMatriz(t,a,b);
				sumaMatriz(t,a,b,c);
				return 0;
}

	


