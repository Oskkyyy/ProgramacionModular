//Calculo del salario neto a paritr de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10 000 MXN, agregar un bono del 5%.

#include <stdio.h>
int main()
{
float horas, salarioNeto, salarioNeto2, salarioNeto3, incremento, salarioBruto, retencion, agregado, costo;
float ivaRe=0.12;
float ivaAg=0.16;
float bono=0.05;

printf("Calculo de salario\n");

printf("Ingrese el pago por  hora trabajada \n");
scanf("%f",&costo);

printf("Ingrese el numero de horas trabajadas \n");
scanf("%f",&horas);

salarioBruto= horas*costo;

agregado=salarioBruto*ivaAg;

salarioNeto=salarioBruto+agregado;

retencion=salarioNeto*ivaRe;

salarioNeto2=salarioNeto-retencion;

if (salarioNeto2<10000){

			incremento=salarioNeto2*bono;
			salarioNeto3=salarioNeto2+incremento;
			printf("Salario neto: %f\n",salarioNeto3);
			printf("Salario bruto: %f\n",salarioBruto);
			printf("Retencion del 12 porciento : %f\n",retencion);
			printf("Agregado del 16 porciento : %f\n",agregado);
			printf("Bono del 5 porciento : %f\n",incremento);
			}
	else
	{
	printf("Salario neto: %f\n",salarioNeto2);
	printf("Salario bruto: %f\n",salarioBruto);
	printf("Retencion del 12 porciento : %f\n",retencion);
	printf("Agregado del 16 porciento : %f\n",agregado);
	}
}
