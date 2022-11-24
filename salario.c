//Calculo del salario neto a paritr de las horas laboradas, el costo por hora y la tasa de IVA agregado el 16% sobre el salario y 12% de IVA retenido. Si el salario neto es menor a $10 000 MXN, agregar un bono del 5%.
//$100 la hora
//8 horas la jornada de trabajo
//$800 el dia
#include <stdio.h>
int main()
{
float horas, salarioNeto, salarioNeto2, salarioNeto3, incremento, salarioBruto, retencion1, retencion2;
float ivaRe=0.12;
float ivaAg=0.16;
float costo=100;
float bono=0.05;
printf("Calculo de salario\n");
printf("Ingrese el numero de horas trabajadas \n");
scanf("%f",&horas);
if (horas<100){
salarioBruto= horas*costo;
retencion1= salarioBruto*ivaRe;
salarioNeto= salarioBruto-retencion1;
retencion2= salarioNeto*ivaAg;
salarioNeto2= salarioNeto-retencion2;
incremento=salarioNeto2*bono;
salarioNeto3=salarioNeto2+incremento;
printf("Salario neto: %f\n",salarioNeto3);
printf("Salario bruto: %f\n",salarioNeto);
printf("Retencion del 12 porciento : %f\n",retencion1);
printf("Impuesto del 16 porciento : %f\n",retencion2);
printf("Bono del 5 porciento : %f\n",incremento);
}else{
salarioBruto= horas*costo;
retencion1= salarioBruto*ivaRe;
salarioNeto= salarioBruto-retencion1;
retencion2= salarioNeto*ivaAg;
salarioNeto2= salarioNeto-retencion2;
printf("Salario neto: %f\n",salarioNeto2);
printf("Salario bruto: %f\n",salarioNeto);
printf("Retencion del 12 porciento : %f\n",retencion1);
printf("Impuesto del 16 porciento : %f\n",retencion2);
}
}
