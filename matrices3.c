//Programa para calcular la transpuesta de una matriz de hasta 3x3

#include<stdio.h>


int main (){
//Se declaran las variables de la matriz, las columnas y filas màs los indices inicializados en 0
	int matriz[3][3], columna, fila, i=0, j=0;
	//Se solicitan la cantidad de filas para la matriz y se almacena en fila
	printf("De cuantas filas es la matriz\n ");
	scanf("%d", &fila);

	//Se solicitan la cantidad de columnas para la matriz y se almacena en columna
	printf("De cuantas columnas es la matriz\n ");
	scanf("%d", &columna);
		
	//Se solicitan los elementos de la matriz y se almacena en el arreglo matriz
	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("Escribe el valor de  (%d,%d)", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

//Se imprime la matriz original
	printf("Matriz dada ");

	for(i = 0;i < fila;i++)
	{
		for(j = 0;j < columna;j++)
		{
			printf("%d\t", matriz[i][j]);
		}
	}	
	//Se imprime la matriz transpuesta
	printf("Matriz transpuesta ");
	
	for(i = 0;i < columna;i++)
	{
		for(j = 0;j < fila;j++)
		{
			printf("%d\t", matriz[j][i]);
		}
	}

}


