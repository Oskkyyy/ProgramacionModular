//Programa para calcular la transpuesta de una matriz de hasta 3x3

#include<stdio.h>


int main (){

	int matriz[3][3], columna, fila, i=0, j=0;
	printf("De cuantas filas es la matriz\n ");
	scanf("%d", &fila);

	printf("De cuantas columas es la matriz\n ");
	scanf("%d", &columna);
		
	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("Escribe el valor de  (%d,%d)", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}


	printf("Matriz dada ");

	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("%d\t", matriz[i][j]);
		}
	}	
	
	printf("Matriz transpuesta ");
	
	for(i = 0;i < columna;i++)
	{
		for(j = 0;j < fila;j++)
		{
			printf("%d\t", matriz[j][i]);
		}
	}

}


