#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Paz Exequiel 1k5 Leg 53382

/* Escriba un programa que lea una cadena desde el teclado como máximo de 120 caracteres, el ingreso
termina cuando se presione la tecla Enter.
SE PIDE:
a. Por medio de una función muestre la cadena Invertida*/

void mostrarInvf(char caracteres[121],int n);

main()
{
	system("color 1A");
	char caracteres[121];
	int longMax=0;
	
	do
	{
		printf("Ingrese una cadena como maximo 120 caracteres, al finalizar presione \"ENTER\".\n");
		_flushall();
		gets(caracteres);
		longMax=strlen(caracteres);
		if(longMax>120)
		{
			printf("\nError! ingreso %d caracteres\nLa cantidad maxima de caracteres que debe ingresar es 120.\n\n",longMax);
		}
	}
	while(longMax>120);
	mostrarInvf(caracteres,longMax);	
}

void mostrarInvf(char caracteres[121],int n)
{
	printf("\n");
	do
	{
		printf("%c",caracteres[n]);
		n--;
	}
	while(n>=0);
	
	printf("\n\n");
	system("pause");
	
}
