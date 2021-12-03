#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Paz Exequiel 1k5 Leg 53382

/*Se tiene un poema con un máximo de 200 caracteres. 
Se solicita un programa que permita el ingreso del poema para luego 
contar y mostrar en pantalla: cuantas consonantes, vocales, dígitos, 
signos de pun-tuación, letras mayúsculas, letras minúsculas y espacios. 
Para el ingreso del poema se utilizara gets() y pa-ra la salida puts().*/

typedef char cadena[201];

int isVocales(char validarVoc);

void contarConsVoc(cadena poema,int n);

int contarDigit(cadena poema,int n);

int contarPunt(cadena poema,int n);

void contarMayusMinus(cadena poema,int n);

int contarSpace(cadena poema,int n);

main()
{
	cadena poema;
	int caracteres=0, digitos,puntuacion,espacios;
	
	printf("Ingrese el poema con hasta 200 caracteres maximo\n");
	_flushall();
	gets(poema);
	caracteres=strlen(poema);
	if(caracteres<200)
	{
		contarConsVoc(poema,caracteres);
		digitos=contarDigit(poema,caracteres);
		puntuacion=contarPunt(poema,caracteres);
		contarMayusMinus(poema,caracteres);
		espacios=contarSpace(poema,caracteres);
		printf("\nLa cantidad de digitos es: %d",digitos);
		printf("\nLa cantidad de signos de puntuacion es: %d",puntuacion);
		printf("\nLa cantidad de espacios es: %d",espacios);
	}
	else
	{
		printf("\nError! la cantidad maxima de caracteres permitidos es 200");
	}
	
	
	printf("\n\n");
	system("pause");
}

int isVocales(char validarVoc)
{
	char letraEnMayuscula = (char) toupper(validarVoc);
    return letraEnMayuscula == 'A' ||
           letraEnMayuscula == 'E' ||
           letraEnMayuscula == 'I' ||
           letraEnMayuscula == 'O' ||
           letraEnMayuscula == 'U';
}

void contarConsVoc(cadena poema,int n)
{
	int vocales=0, consonantes=0;
	cadena copia;
	strcpy(copia,poema);
	strupr(copia);
	for(int i=0;i<n;i++)
	{
		if(isalpha(copia[i]))
		{
			if(isVocales(copia[i]))
			{
				vocales++;
			}
			else
			{
				consonantes++;
			}
		}
	}
	printf("\nLa cantidad de vocales es:%d \nLa cantidad de consonantes es: %d", vocales, consonantes);
}

int contarDigit(cadena poema,int n)
{
	int digitos=0;
	for(int i=0;i<n;i++)
	{
		if(isdigit(poema[i]))
		{
			digitos++;
		}
	}
	return digitos;
}

int contarPunt(cadena poema,int n)
{
	int sPuntuacion=0;
	for(int i=0;i<n;i++)
	{
		if(ispunct(poema[i]))
		{
			sPuntuacion++;
		}
	}
	return sPuntuacion;
}

void contarMayusMinus(cadena poema,int n)
{
	int mayus=0, minus=0;
	for(int i=0;i<n;i++)
	{
		if(isalpha(poema[i]) && islower(poema[i]))
		{
			minus++;
		}
		if(isalpha(poema[i]) && isupper(poema[i]))
		{
			mayus++;
		}
		
	}
	printf("\nLa cantidad de Mayusculas es %d y de minusculas es %d",mayus,minus);
}
int contarSpace(cadena poema,int n)
{
	int espacios=0;
	for(int i=0;i<n;i++)
	{
		if(isspace(poema[i]))
		{
			espacios++;
		}
	}
	return espacios;
}
