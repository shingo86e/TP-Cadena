#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Paz Exequiel 1k5 Leg 53382

/*Escriba un programa que lea una cadena desde el teclado el ingreso 
termina cuando se presione la tecla enter.
Se Pide:
a. Cuente el n�mero de caracteres de tres categor�as: letras (a-z y A-Z), 
d�gitos (0-9) y otros caracteres. Utilice las funciones: isdigit() e isalpha() 
definidas en la librer�a ctype.h. Mostrando
el resultado en la funci�n main().*/

typedef char cadena[101];

int contarAlpha(cadena caracteres,int n);

int contarDigit(cadena caracteres,int n);

int contarOthers(cadena caracteres,int n);

main()
{
	cadena caracteres;
	int n, letras,numeros,others;
	
	_flushall();
	printf("Ingrese el texto que desea, para finalizar presione la tecla ENTER.\n");
	gets(caracteres);
	n=strlen(caracteres);
	letras=contarAlpha(caracteres,n);
	numeros=contarDigit(caracteres,n);
	others=contarOthers(caracteres,n);
	printf("\nLa cantidad de letras (a-z y A-Z) es: %d",letras);
	printf("\nLa cantidad de digitos (0-9)) es: %d",numeros);
	printf("\nLa cantidad de otros caracteres es: %d",others);
	
	printf("\n\n");
	system("pause");
}

int contarAlpha(cadena caracteres,int n)
{
	int contador=0;
	for(int i=0;i<n;i++)
	{
		if(isalpha(caracteres[i]))
		{
			contador++;
		}
	}
	return contador;
}

int contarDigit(cadena caracteres,int n)
{
	int contador=0;
	for(int i=0;i<n;i++)
	{
		if(isdigit(caracteres[i]))
		{
			contador++;
		}
	}
	return contador;
}

int contarOthers(cadena caracteres,int n)
{
	int contador=0;
	for(int i=0;i<n;i++)
	{
		if(isalpha(caracteres[i]) or isdigit(caracteres[i]))
		{
			
		}
		else
		{
			contador++;
		}
	}
	return contador;
}
