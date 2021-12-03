#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

//Paz Exequiel 1k5 Leg 53382

/*Realizar un programa que reciba por teclado diferentes palabras,
 hasta que se ingrese la palabra "final". 
 Entonces se deberá mostrar por pantalla cual fue la palabra más larga 
 ingresada y cuantas palabras
se ingresaron sin contar la palabra “final”.*/

typedef char cadena[100];

main()
{	
	cadena vector[100];
	char aux[100], mayor[100];
	int comparar=0,elementos=0, i=0, b, tamanoV,tamanoM,pos;
	
	printf("Ingrese las palabras del vector, para salir ingrese \"final\"\n");
	_flushall();
	gets(vector[i]);
	comparar=strcmp(vector[i],"final");
	while(comparar!=0)
	{
		elementos++;
		i++;
		gets(vector[i]);
		comparar=strcmp(vector[i],"final");
	}
	
	strcpy(mayor,vector[1]);
	
	for(int i=0;i<elementos;i++)
	{
		tamanoV=strlen(vector[i]);
		tamanoM=strlen(mayor);
		if(tamanoV>tamanoM)
		{
			pos=i;
			strcpy(mayor,vector[i]);
		}		
	}
	printf("\n\nLa palabra mas larga ingresada fue %s y se ingresaron %d palabras",vector[pos],elementos);
	printf("\n\n");
	system("pause");
	
}
	
	

