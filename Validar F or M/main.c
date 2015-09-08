#include <stdio.h>
#include <stdlib.h>

char validarSexo(char );

int main(int argc, char *argv[])
{
   char  sexo;  
   
   
    printf("\n Ingrese sexo: F/M ");
        sexo= tolower(getche());
        sexo= validarSexo(sexo);
   
   
   system("cls");
   if(sexo=='f')
   {
      printf("\n SEXO ELEGIDO: FEMENINO");
   }else{
   	
   	printf("\n SEXO ELEGIDO: MASCULINO");
   }
   
}




//FUNCION

char validarSexo(char letra)
{
	
	while(!(isalpha(letra)) || !(letra =='f' || letra== 'm'))
	{
		printf("\n INCORRECTO ... REINGRESE  F/M: ");
		letra= tolower(getche());
		
	}
	return letra;
}
