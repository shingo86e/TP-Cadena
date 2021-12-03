#include <stdlib.h>
#include <stdio.h>
#include <string.h>


//Paz Exequiel 1k5 Leg 53382


/*Ingresar en un vector los nombres de las N asignaturas de la carrera Ing. 
Sistema de Información, paralelamente ingresar en otro vector la cantidad de alumnos inscriptos en cada asignatura.

SE PIDE:
a. En una función Sin Tipo, realizar la carga de los vectores en forma simultánea, Asignatura y nro. de inscriptos.

b. Haciendo uso de una función Con Tipo, determinar y mostrar en la función main(), que asignatura tiene el mayor
número de inscriptos.

c. Por medio de una función con tipo, encontrar la cantidad de inscriptos tiene una determinada asignatura. 
El nombre de la asignatura se ingresa por teclado solicitado en la función de búsqueda.
*/

typedef char cadena[100];

void cargarf(cadena asignaturas[100],int inscriptos[50],int n);

int mayf(int inscriptos[50],int n);

int buscarf(cadena asignaturas[100],int n, cadena busqueda);

main()
{
	cadena asignaturas[100], busqueda;
	int inscriptos[50], n=0, pos,asignaturaInscr;
	
	printf("ingresar la cantidad de asignaturas: ");
	scanf("%d",&n);
	printf("\n");
	cargarf(asignaturas,inscriptos,n);
	pos=mayf(inscriptos,n);
	printf("\nLa asignatura con mayor numero de inscriptos es: %s",asignaturas[pos]);
	printf("\n\nIngrese la asignatura para ver la cantidad de inscriptos en ella: ");
	_flushall();
	gets(busqueda);	
	asignaturaInscr=buscarf(asignaturas,n,busqueda);
	if(asignaturaInscr!=-1)
	{
		printf("\nLa cantidad de inscriptos en la asignatura %s es: %d",asignaturas[asignaturaInscr],inscriptos[asignaturaInscr]);
	}
	else
	{
		printf("\nNo se encontro la materia ingresada");
	}
	
	printf("\n\n");
	system("pause");	
}

void cargarf(cadena asignaturas[100],int inscriptos[50],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Asignatura %d: ",i);
		_flushall();
		gets(asignaturas[i]);
		printf("Inscriptos: ");
		scanf("%d",&inscriptos[i]);
		printf("\n");
	}
}

int mayf(int inscriptos[50],int n)
{
	int may=0, pos;
	
	for(int i=0;i<n;i++)
	{
		if(inscriptos[i]>may)
		{
			may=inscriptos[i];
			pos=i;
		}
	}
	return pos;
}

int buscarf(cadena asignaturas[100],int n, cadena busqueda)
{
	int comparar, pos;
	
	for(int i=0;i<n;i++)
	{
		comparar=strcmp(busqueda,asignaturas[i]);
		if(comparar==0)
		{
			pos=i;
		}
		else
		{
			pos=-1;
		}
	}
	return pos;
}
