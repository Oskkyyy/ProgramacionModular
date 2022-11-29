//Menu de ejecucion de programas desarrollados durante el semestre
#include <stdio.h>
#include<math.h>
int main () {
	//Se declaran todas las variables de los programas ejecutables
        int opcion, co, ca, base, alt, l, base2, alt2, bMay, bMen, alt3, fact, n;
	int t, aa[10][10], b[10][10], cc[10][10];
	int mat1[2][2],mat2[2][2],resultado=0, resul[2][2];
	int ii,jj,ccc;
	int matriz[3][3], columna, fila, i=0, j=0;
	float h ,a, a1, a2, a3, a4, a5, a6, c,f,k, c2,f2,k2, c3,f3,k3;
	float horas, salarioNeto, salarioNeto2, salarioNeto3, incremento, salarioBruto, retencion, agregado, costo;
	float ivaRe=0.12;
	float ivaAg=0.16;
	float bono=0.05;
        char opc, opc2, opc3;
        do{
                // Imprimir las opciones del menu
               printf("1) Calculo de triangulos\n2)Calculo de area de cuadrados\n3)Conversion de temperatura\n4)Suma de matrices 2*2 a 10*10\n5)Multiplicacion de matrices de 2*2\n6)Factorial de un numero natural menor a 13\n7)Transpuesta de una matriz de 3*3\n8)Calculo de salario\n9)Salir\n");
               scanf("%d",&opcion);
       //Leer la opción deseada
      switch (opcion) {
              case 1:
		      //Se solicita la opcion a realizar de las opciones que guarda el programa de triangulo y se guarda en opc
                        printf("a)Calculo de la hipotenusa\n b)Calculo del area\n c)Calculo del angulo\n");
			scanf("%c",&opc);
                      //Triangulos

                        switch (opc) {
				case 'a':
					//Cálculo de la hipotenusa
					printf("Escribe la longitud del cateto adyacente:");
					scanf("%d",&ca);
					printf("Escribe la longitud del cateto opuesto:");
					scanf("%d",&co);
					h = sqrt(co*co+ca*ca);
					printf("La hipotenusa mide: %f\n",h);
					break;
				case 'b':
					//Calculo de area
					printf("Escribe la base:");
					scanf("%d",&base);
					printf("Escribe la altura:");
					scanf("%d",&alt);
					a = base*alt/2;
					printf("El area del triangulo es: %f\n",a);

					break;
				case 'c':
					//Calculo de tercer angulo
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

		      //Se solicita la opcion a realizar de las opciones que guarda el programa de cuadrado y se guarda en opc2
                        printf("d)Area de un cuadrado\n e)Area de un rectangulo\n f)Area de un trapecio\n");
			scanf("%c",&opc2);
		//Cuadrilateros
			switch (opc2){
				case 'd':
					//Calculo de area de un cuadrado
					printf("Escribe la longitud del lado del cuadrado:");
					scanf("%d",&l);
					a4 = (l*l);
					printf("El area del cuadrado es: %f",a4);
					break;
				case 'e':
					//Calculo de area de un rectangulo
					printf("Escribe la longitud de la base:");
					scanf("%d",&base2);
					printf("Escribe la longitud de la altura:");
					scanf("%d",&alt2);
					a5 = base2*alt2;
					printf("El area del rectangulo es: %f",a5);
					break;
				case 'f':
					//Calculo de area de un trapecio
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

		      //Se solicita la opcion a realizar de las opciones que guarda el programa de temperatura y se guarda en opc3
                        printf("g)Equivalencias de Celcius a Fahrenheit y Kelvin\n h)Equivalencias de Fahrenheit a Celcius y Kelvin\n i)Equivalencias de Kelvin a Celcius y Fahrenheit\n");
			scanf("%c",&opc3);
			//Programa para calcular equivalencias entre temperaturas Celcius, Farenheit y Kelvin.
			switch (opc3){
				case 'g':
					//Calculo de temperatura de Celcius a Farenheit y Kelvin
					printf("Escribe la temperatura en grados Celcius:");
					scanf("%f",&c);
					f = (c*1.8)+32;
					printf("El equivalente en grados Fahrenheit es de: %f\n",f);
					k = c+273.15;
					printf("El equivalente en Kelvin es de: %f",k);
					break;
				case 'h':
				//Calculo de temperatura de Fahrenheit a Celcius y Kelvin	
					printf("Escribe la temperatura en grados Fahrenheit:");
					scanf("%f",&f2);
					c2 = (f2-32)/1.8;
					printf("El equivalente en grados Celcius es de: %f\n",c2);
					k2 = 5*((f2-32)/9)+273.15;
					printf("El equivalente en Kelvin es de: %f",k2);
					break;
				case 'i':
					//Calculo de temperatura de Kelvin a Celcius y Farenheit
					printf("Escribe la temperatura en Kelvin:");
					scanf("%f",&k3);
					c3 = k3-273.15;
					printf("El equivalente en grados Celcius es de: %f\n",c3);
					f3 = 1.8*(k3-273.15)+32;
					printf("El equivalente en Fahrenheit es de: %f",f3);
					break;
				default:
					printf("Opcion invalida\n");
			}

                      break;
              case 4:
//Programa para sumar matrices
		      printf("Teclee tamaño de la matriz");
		      scanf("%d",&t);
		      //Funcion que solicita al usuario escriba los elementos de las matrices A y B y los guarde en las variables a,b
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
			//Función que realiza la operacion de suma entre las matrices y lo asigna a la mtriz c la imprime
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
		      // Funcionamiento de un factorial
		      //  se escribe el numero que se desea obtener el factorial
		      printf ("\n Dame un numero menor a 13 y mayor que 0\n:");
		      scanf("%d",&n);
		      int factorial (int n)
		{//Se declara la variable f de tipo entero
		      int f2;
		      	//Se impone la condicion, si n es igual a cero f adquiere el valor de uno
			if(n==0)
			{
	       			f2=1;
			}		
			else//De otra manera, f tendra el valor de n por el resultado de la funcion factorial con n-1
			{
				f2=n*factorial(n-1);
			}
			return f2;
		} //Funcion recursiva de factorial e impresion de resultado
		 		     fact=factorial(n);
				printf("\n El factorial =%d \n",fact);
                      break;
              case 5:   
//Programa para resolver multiplicaciones de matrices de 2x2

//Se inicializa en 0 la matriz resultado
			for(ii=0;ii<2;ii++)
			for(jj=0;jj<2;jj++)
			resul[ii][jj]=0;
			//Se solicitan los elementos de la matriz A y se almacenan en la variable mat1
			for(ii=0;ii<2;ii++)
			{
				for(jj=0;jj<2;jj++)
				{
					printf("Introduzca el valor de A(%d,%d):",ii+1,jj+1);
					scanf("%d", &mat1[ii][jj]);
				}
			}
			//Se solicitan los elementos de la matriz B y se almacenan en la variable mat2
			for(ii=0;ii<2;ii++)
			{
				for(jj=0;jj<2;jj++)
				{
					printf("Introduzca el valor de B(%d,%d):",ii+1,jj+1);
					scanf("%d", &mat2[ii][jj]);
				}
			}		
			//Se realiza la operacion de multiplicacion y el valor resultante se almacena en la matriz resultado, de nombre resul
			for(ii=0;ii<2;ii++)
			{
				for(ccc=0;ccc<2;ccc++)
				{
					for(jj=0;jj<2;jj++)
					{
					resultado=resultado+(mat1[ii][jj]*mat2[jj][ccc]);
					}
					resul[ii][ccc]=resultado;
					resultado=0;
				}
			}
			// Se imprimen los elementos de la matriz resultado
			printf("Matriz resultado ");
				for(ii=0;ii<2;ii++)
				{

					for(ccc=0;ccc<2;ccc++)
					{
						printf("%d\t",resul[ii][ccc]);
					}
				}
		
                      break;
              case 7:
		      //Programa para calcular la transpuesta de una matriz de hasta 3x3
		      	//Se solicitan la cantidad de filas para la matriz y se almacena en fila
       			 printf("De cuantas filas es la matriz\n ");
        		scanf("%d", &fila);
				//Se solicitan la cantidad de columnas para la matriz y se almacena en columna
       			 printf("De cuantas columas es la matriz\n ");
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
                      break;
              case 8:
		      //Calculo del salario neto a paritr de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10 000 MXN, agregar un bono del 5%.
		      printf("Calculo de salario\n");
// Se solicita al usuario el costo de sus horas de trabajo

			printf("Ingrese el pago por  hora trabajada \n");
			scanf("%f",&costo);
//Se solicita la cantidad de horas trabajadas

			printf("Ingrese el numero de horas trabajadas \n");
			scanf("%f",&horas);
			//Formulas para determinar el salario bruto, el salario bruto más agregado y el salario neto.
			//
			salarioBruto= horas*costo;

			agregado=salarioBruto*ivaAg;

			salarioNeto=salarioBruto+agregado;

			retencion=salarioNeto*ivaRe;

			salarioNeto2=salarioNeto-retencion;

			if (salarioNeto2<10000){
//Formula para agregar un bono en caso de que el salario neto sea menor a 10000
			incremento=salarioNeto2*bono;
			salarioNeto3=salarioNeto2+incremento;
					//Impresion de los valores del salario
			printf("Salario neto: %f\n",salarioNeto3);
			printf("Salario bruto: %f\n",salarioBruto);
			printf("Retencion del 12 porciento : %f\n",retencion);
			printf("Agregado del 16 porciento : %f\n",agregado);
			printf("Bono del 5 porciento : %f\n",incremento);
			}
				else
					{
								//Impresion de los valores del salario
					printf("Salario neto: %f\n",salarioNeto2);
					printf("Salario bruto: %f\n",salarioBruto);
					printf("Retencion del 12 porciento : %f\n",retencion);
					printf("Agregado del 16 porciento : %f\n",agregado);
					}	
                      break;
              case 9:
                      break;
              default:
	      printf("Opcion incorrecta\n");
              break;
      }
        } while (opcion != 9);
        return 0;
}


//Elaborado por Ortiz Bravo Oscar 1196 FCA UNAM
