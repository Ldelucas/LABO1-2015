#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, num, modulo, contNum=0, ContPar=0, ContImpar=0;
	int acunum=0, AcuNumP=0, AcuNumI=0, maxNum, minNum, flag=0, flag1=0;
	int cont315=0, cont1629=0, cont30=0, acumImpares=0;
	float Promedio;
	char seguir;
	do
	{
		printf("\n Ingrese numero:");
		scanf("%d",& num);
		while(num<=0)
		{
			printf("ERROR... reingrese numero positivo:");
			scanf("%d",& num);
		}
		contNum++;
		acunum=acunum+num;
		if(num>=3 && num<=15)
		{
			cont315++;
		}
        if(num>=16 && num<=29)
		{
			cont1629++;
		}
		if(num>=30)
		{
			cont30++;
		}
				
		modulo= num% 2;//el módulo divido 2 es 0=PAR ó 1=IMPAR
	    if(num>maxNum || flag==0)
	     {
	     	maxNum=num;
	     	flag=1;
		 }
	
		if(modulo==0)
		{
			ContPar++;
			AcuNumP=AcuNumP+num;
		}
		if(modulo==1)
		{
			ContImpar++;
			AcuNumI=AcuNumI+num;
		   
		   if(num< minNum || flag1==0)
		   {
		   	  minNum=num;
		   	  flag1=1;
		   }
		
		}
		
		
		
		printf("Desea continuar s/n?");
	    seguir= tolower(getche());
	    getch();
	}while(seguir == 's' );
	
	
	
	Promedio= (float)acunum/ contNum;
	system("cls");
	printf("\n 1-IMPARES: %d  \n 2-PARES: %d \n 3-SUMA DE NUMEROS IMPARES: %d \n 4-PROMEDIO: %.2f \n 5-EL NUMERO MAYOR INGRESADO: %d \n 6-IMPAR MENOR: %d",ContImpar, ContPar, AcuNumI, Promedio, maxNum, minNum );
	printf("\n 7-NUMEROS ENTRE 3 - 15: %d  \n NUMEROS ENTRE 16 - 29: %d \n NUMEROS MAYORES A 30: %d",cont315, cont1629, cont30 );

    for(i=1; i<=AcuNumI; i++)
	{
		acumImpares= acumImpares+i;
		
		printf("\n  IMPARES ANTECEDEN:%d",i);
		
	}
	printf("\n SUMATORIA NUMEROS QUE LO ANTECEDEN:%d",acumImpares);
	getch();
}
