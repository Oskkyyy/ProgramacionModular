//Programa para resolver multiplicaciones de matrices de 2x2
#include <stdio.h>

void main(void)
{
//Declara en variables las tres matrices, dos factores, el producto y una variable en 0 para utilizar en una formula.
int mat1[2][2],mat2[2][2],resultado=0, resul[2][2];
int i,j,c;
//Se inicializa en 0 la matriz resultado
for(i=0;i<2;i++)
for(j=0;j<2;j++)
resul[i][j]=0;
//Se solicitan los elementos de la matriz A y se almacenan en la variable mat1
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Introduzca el valor de A(%d,%d):",i+1,j+1);
scanf("%d", &mat1[i][j]);
}
}
//Se solicitan los elementos de la matriz B y se almacenan en la variable mat2
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Introduzca el valor de B(%d,%d):",i+1,j+1);
scanf("%d", &mat2[i][j]);
}
}
//Se realiza la operacion de multiplicacion y el valor resultante se almacena en la matriz resultado, de nombre resul
for(i=0;i<2;i++){
for(c=0;c<2;c++){
for(j=0;j<2;j++){
resultado=resultado+(mat1[i][j]*mat2[j][c]);
}
resul[i][c]=resultado;
resultado=0;
}
}
// Se imprimen los elementos de la matriz A
printf("Matriz A ");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",mat1[i][j]);
}

}

// Se imprimen los elementos de la matriz B
printf("Matriz B ");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",mat2[i][j]);
}
}

// Se imprimen los elementos de la matriz resultado
printf("Matriz resultado ");
for(i=0;i<2;i++){

	for(c=0;c<2;c++){
printf("%d\t",resul[i][c]);
}
}
}
