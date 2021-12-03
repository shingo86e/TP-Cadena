#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Paz Exequiel 1k5 Leg 53382

/*Un negocio tiene una lista de sus socios (apellidos y nombres). 
Se le pide realizar un programa, 
que por medio de un menú de opciones se pueda realizar lo siguiente:
	
a. Usando una función, Ingrese los datos de sus socios.

b. Usando una función, Ordenar en el mismo vector los datos en forma decreciente.

c. Usar una función, para mostrar en pantalla la lista de personas.

d. En otro vector ordenar los apellidos en forma creciente (“A” a la “Z”). Mostrar los datos

e. Buscar un determinado apellido que deberá ser introducido por teclado y 
verificar si existe en la lista. Si existe más de una vez indicar la cantidad de veces que aparece.*/

typedef char cadena[100];

void cargarf(cadena sociosAp[100],int &n,cadena sociosNom[100]);

void ordenarf(cadena socios[100],int n,cadena sociosNom[100]);

void mostrarf(cadena socios[100],int n,cadena sociosNom[100]);

void ordenarfInv(cadena socios[100],int n,cadena sociosNom[100]);

void buscarf(cadena socios[100],int n);

main()
{
	cadena sociosAp[100], sociosNom[100];
	int opcion=0, n=0;
	do
	{
		printf("Menu\n\n");
		printf("1) Ingreso datos de socios.\n");
		printf("2) Ordenar datos en forma decreciente alfabeticamente\n");
		printf("3) Listar socios\n");
		printf("4) Ordenar por apellido en forma creciente y mostrar los datos\n");
		printf("5) Buscar apellido, verificar si existe y si es así indicar cuantas veces aparece\n");
		printf("0) Salir del programa\n");
		printf("\nOpcion: ");
		scanf("%d",&opcion);
		system("cls");
	
		switch(opcion)
		{
			case 1:
				{
					cargarf(sociosAp,n,sociosNom);
					break;
				}
			case 2:
				{
					ordenarf(sociosAp,n,sociosNom);
					break;
				}
			case 3:
				{
					mostrarf(sociosAp,n,sociosNom);
					break;
				}
			case 4:
				{
					ordenarfInv(sociosAp,n,sociosNom);
					break;
				}
			case 5:
				{
					buscarf(sociosAp,n);
					break;
				}
			default :
				{
					if(opcion==0)
					{
						printf("\nSaliendo del programa\n\n");
					}
					else
					{
						printf("Error! la opcion no es valida, ingrese una opcion correcta del menu\n\n");
					}
					system("pause");
					system("cls");
				}
		}
	}
	while(opcion!=0);
	
	printf("\n\n");
	system("pause");	
}

void cargarf(cadena sociosAp[100],int &n,cadena sociosNom[100])
{
	int i=0, comparar=0;
	const cadena cero={'0','\0'};
	printf("Ingrese los Apellido y Nombre de los socios, para finalizar la carga ingrese 0\n");
	_flushall();
	do
	{
		n++;
		printf("Socio: %d\n",i);
		printf("Apellido: ");
		gets(sociosAp[i]);
		comparar=strcmp(cero,sociosAp[i]);
		if(comparar!=0)
		{
			printf("Nombre: ");
			gets(sociosNom[i]);
		}		
		i++;
		printf("\n");
	}
	while(comparar!=0);
	n--;	
	printf("\n\n");
	system("pause");
	system("cls");
}

void ordenarf(cadena socios[100],int n,cadena sociosNom[100])
{
	cadena aux, aux2;
	int comparar;
	
	if(n!=0)
	{
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				comparar=strcmp(socios[i],socios[i+1]);
				if(comparar<0)
				{
					strcpy(aux,socios[i+1]);
					strcpy(aux2,sociosNom[i+1]);
					strcpy(socios[i+1],socios[i]);
					strcpy(sociosNom[i+1],sociosNom[i]);
					strcpy(socios[i],aux);
					strcpy(sociosNom[i],aux2);
				}
			}
		}
	}	
	else
	{
		printf("\nAun no se ingresaron datos\n");
	}
	printf("\n\n");
	system("pause");
	system("cls");

}

void mostrarf(cadena socios[100],int n,cadena sociosNom[100])
{
	if(n!=0)
	{
		for(int i=0;i<n;i++)
		{
			printf("%s %s\n",socios[i],sociosNom[i]);	
		}
	}
	else
	{
		printf("\nAun no se ingresaron datos\n");
	}
	
	system("pause");
	system("cls");
}

void ordenarfInv(cadena socios[100],int n,cadena sociosNom[100])
{
	cadena aux, aux2;
	int comparar;
	
	if(n!=0)
	{
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				comparar=strcmp(socios[i],socios[i+1]);
				if(comparar>0)
				{
					strcpy(aux,socios[i+1]);
					strcpy(aux2,sociosNom[i+1]);
					strcpy(socios[i+1],socios[i]);
					strcpy(sociosNom[i+1],sociosNom[i]);
					strcpy(socios[i],aux);
					strcpy(sociosNom[i],aux2);
				}
			}
		}
	}	
	else
	{
		printf("\nAun no se ingresaron datos\n");
	}
	for(int i=1;i<=n;i++)
		{
			printf("%s %s\n",socios[i],sociosNom[i]);
		}
	
	printf("\n\n");
	system("pause");
	system("cls");

}

void buscarf(cadena socios[100],int n)
{
	cadena apellido;
	int comparar, pos, contador=0;
	
	if(n!=0)
	{
		printf("Ingrese el apellido a buscar y contar");
		printf("\nApellido: ");
		_flushall();
		gets(apellido);
		for(int i=0;i<n;i++)
		{
			comparar=strcmp(socios[i],apellido);
			if(comparar==0)
			{
				pos=i;
				contador++;
			}
		}
		if(contador!=0)
		{
			printf("El apellido %s, se encontro %d veces.",apellido,contador);
		}
		else
		{
			printf("El apellido %s, no se encontro.",apellido);
		}

	}	
	else
	{
		printf("\nAun no se ingresaron datos\n");
	}
	printf("\n\n");
	system("pause");
	system("cls");

}
