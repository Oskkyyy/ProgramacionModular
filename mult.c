#include <stdio.h>

void main(void)
{

int mat1[2][2],mat2[2][2],resultado=0, resul[2][2];
int i,j,c;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
resul[i][j]=0;
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Introduzca el valor de A(%d,%d):",i+1,j+1);
scanf("%d", &mat1[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("Introduzca el valor de B(%d,%d):",i+1,j+1);
scanf("%d", &mat2[i][j]);
}
}
for(i=0;i<2;i++){
for(c=0;c<2;c++){
for(j=0;j<2;j++){
resultado=resultado+(mat1[i][j]*mat2[j][c]);
}
resul[i][c]=resultado;
resultado=0;
}
}

printf("Matriz A ");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",mat1[i][j]);
}

}

printf("Matriz B ");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",mat2[i][j]);
}
}

printf("Matriz resultado ");
for(i=0;i<2;i++){

	for(c=0;c<2;c++){
printf("%d\t",resul[i][c]);
}
}
}
