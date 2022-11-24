//Prueba de menu jsjsjs
#include <stdio.h>
#include<math.h>
int main () {
        int opcion, co, ca, base, alt, l, base2, alt2, bMay, bMen, alt3, fact, n;
	int t, aa[10][10], b[10][10], cc[10][10];
	int matriz[3][3], columna, fila, i=0, j=0;
	float h ,a, a1, a2, a3, a4, a5, a6, c,f,k, c2,f2,k2, c3,f3,k3;
        char opc, opc2, opc3;
        do{
                // Imprimir las opciones del menu
               printf("1) Calculo de triangulos\n2)Calculo de area de cuadrilateros\n3)Conversion de medidas de temperatura\n4)Suma de una matriz de 2x2 hasta 10x10\n5)Multiplicacion de una matriz de 2x2\n6)Factorial de un numero menor a 13\n7)Transpuesta de una matriz de 3x3\n8)Calculo de salario\n9)Salir\n");
               scanf("%d",&opcion);
       //Leer la opción deseada
      switch (opcion) {
              case 1:
                        printf("a)Calculo de la hipotenusa\n b)Calculo del area\n c)Calculo del angulo\n");
			scanf("%c",&opc);
                      //Triangulos

                        switch (opc) {
				case 'a':
					printf("Escribe la longitud del cateto adyacente:");
					scanf("%d",&ca);
					printf("Escribe la longitud del cateto opuesto:");
					scanf("%d",&co);
					h = sqrt(co*co+ca*ca);
					printf("La hipotenusa mide: %f\n",h);
					break;
				case 'b':
					printf("Escribe la base:");
					scanf("%d",&base);
					printf("Escribe la altura:");
					scanf("%d",&alt);
					a = base*alt/2;
					printf("El area del triangulo es: %f\n",a);

					break;
				case 'c':
					printf("Escribe el valor de los dos angulos:");
					scanf("%f%f", &a1, &a2);
					a3 = 180-(a1 + a2);
					printf("El tercer angulo mide: %f\n",a3);
					break;
				default:
					printf("Opcion invalida\n");
                        }

                      break;
              case 2:
                        printf("d)Area de un cuadrado\n e)Area de un rectangulo\n f)Area de un trapecio\n");
			scanf("%c",&opc2);
			switch (opc2){
				case 'd':
					printf("Escribe la longitud del lado del cuadrado:");
					scanf("%d",&l);
					a4 = (l*l);
					printf("El area del cuadrado es: %f",a4);
					break;
				case 'e':
					printf("Escribe la longitud de la base:");
					scanf("%d",&base2);
					printf("Escribe la longitud de la altura:");
					scanf("%d",&alt2);
					a5 = base2*alt2;
					printf("El area del rectangulo es: %f",a5);
					break;
				case 'f':
					printf("Escribe la longitud de la base menor:");
					scanf("%d",&bMen);
					printf("Escribe la longitud de la base mayor:");
					scanf("%d",&bMay);
					printf("Escribe la longitud de la altura:");
					scanf("%d",&alt3);
					a6 = (((bMay+bMen)*alt3)/2);
					printf("El area del trapecio es: %f\n",a6);
					break;
				default:
					printf("Opcion invalida\n");
			}
                      break;
              case 3:
                        printf("g)Equivalencias de Celcius a Fahrenheit y Kelvin\n h)Equivalencias de Fahrenheit a Celcius y Kelvin\n i)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
			scanf("%c",&opc3);
			switch (opc3){
				case 'g':
					printf("Escribe la temperatura en grados Celcius:");
					scanf("%f",&c);
					f = (c*1.8)+32;
					printf("El equivalente en grados Fahrenheit es de: %f",f);
					k = c+273.15;
					printf("El equivalente en Kelvin es de: %f",k);
					break;
				case 'h':
					printf("Escribe la temperatura en grados Fahrenheit:");
					scanf("%f",&f2);
					c2 = (f2-32)/1.8;
					printf("El equivalente en grados Celcius es de: %f",c2);
					k2 = 5*((f2-32)/9)+273.15;
					printf("El equivalente en Kelvin es de: %f",k2);
					break;
				case 'i':
					printf("Escribe la temperatura en Kelvin:");
					scanf("%f",&k3);
					c3 = k3-273.15;
					printf("El equivalente en grados Celcius es de: %f",c3);
					f3 = 1.8*(k3-273.15)+32;
					printf("El equivalente en Fahrenheit es de: %f",f3);
					break;
				default:
					printf("Opcion invalida\n");
			}

                      break;
              case 4:
		      printf("Teclee tamaño de la matriz");
		      scanf("%d",&t);
		      for (int i=0;i<t;i++)
			{
				for (int j=0;j<t;j++)
				{
					printf("Ingrese el valor de la matriz A (%d,%d)",i+1,j+1);
					scanf("%i",&aa[i][j]);
				}

			}
			for (int i=0;i<t;i++)
        		{
                		for (int j=0;j<t;j++)
                		{
                        		printf("Ingrese el valor de la matriz B  (%d,%d)",i+1,j+1);
                        		scanf("%i",&b[i][j]);
               			 }
        		}
			for (int i=0;i<t;i++)
			{

				for (int j=0;j<t;j++)
				{
					cc[i][j]=aa[i][j]+b[i][j];
					printf("%d\t", cc[i][j]);
				}
			}	
                      break;
              case 6:
		      printf ("\n Dame un numero natural menor a 13\n:");
		      scanf("%d",&n);
		      int factorial (int n)
		{
		      int f2;
			if(n==0)
			{
	       			f2=1;
			}		
			else
			{
				f2=n*factorial(n-1);
			}
			return f2;
		}
		 		     fact=factorial(n);
				printf("\n El factorial =%d \n",fact);
                      break;
              case 5:
//Multiplicacion de matrices
                      break;
              case 7:
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
                      break;
              case 8:

                      break;
              case 9:


                      break;
              default
                      :printf("Opcion incorrecta\n");
              break;
      }
        } while (opcion != 9);
        return 0;
}


