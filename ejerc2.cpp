#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Paz Exequiel 1k5 Leg 53382

/*Ingresar una lista con los nombres de personas, separados por una coma. La cadena tiene un tamaño
máximo de 100 caracteres. El ingreso termina cuando se presiona la tecla Enter.
Ejemplo de cómo se ingresa la lista: Juan, Pedro, Angela, Beatriz, Jose, Luis, Angel, 

a. Haciendo uso de una Función Sin Tipo, por pantalla Mostrar cada una de las palabras que forman la cadena una
debajo de la otra. Ten en cuenta que el separador de palabras es la coma.

b. Haciendo uso de una función Con tipo devolver la longitud de la cadena ingresada. 
No utilizar la función strlen(cadena), incluida en la biblioteca string.h. 
(Lo que deberá hacer es contar caracter por caracter)
*/
typedef char cadena[101];

void mostrarf(cadena nombres);

int contarf(cadena nombres);

main()
{
	cadena nombres;
	int contar;
	
	printf("Ingrese nombres separados por \",\" hasta 100 caracteres, para finalizar la carga presione ENTER\n");
	_flushall();
	gets(nombres);
	system("cls");
	contar=contarf(nombres);
	if(contar<100)
	{
		mostrarf(nombres);	
		if(contar==0)
		{
			printf("\n\nNo se ingresaron nombres");
		}
		else
		{
			printf("\n\nLa longitud de la cedana ingresada es: %d",contar);
		}
	}
	else
	{
		printf("\nError! la cadena no puede ser mayor a 100 caracteres");
	}
	
	
	printf("\n\n");
	system("pause");
}

void mostrarf(cadena nombres)
{
	int longitudCadena;	
	
	longitudCadena=strlen(nombres);
	
	for(int i=0;i<longitudCadena;i++)
	{
		
		if(nombres[i]==',')
		{
			printf("\n");
		}
		
		else
		{
			if(nombres[i]==' ')
			{
			
			}
			else
			{
				printf("%c",nombres[i]);
			}
			
		}
		
	}
	
}

int contarf(cadena nombres)
{
	int contar=0;
	
	while(nombres[contar]!='\0')
	{
		contar++;
	}
	
	
	return contar;
}

