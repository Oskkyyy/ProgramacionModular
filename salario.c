//Calculo del salario neto a paritr de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10 000 MXN, agregar un bono del 5%.

#include <stdio.h>
int main()
{
	//Declaracion de variables para la ejecucion de formulas 
float horas, salarioNeto, salarioNeto2, salarioNeto3, incremento, salarioBruto, retencion, agregado, costo;
float ivaRe=0.12;
float ivaAg=0.16;
float bono=0.05;

printf("Calculo de salario\n");
// Se solicita al usuario el costo de sus horas de trabajo
printf("Ingrese el pago por  hora trabajada \n");
scanf("%f",&costo);
//Se solicita la cantidad de horas trabajadas
printf("Ingrese el numero de horas trabajadas \n");
scanf("%f",&horas);
//Formulas para determinar el salario bruto, el salario bruto más agregado y el salario neto.
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
}
