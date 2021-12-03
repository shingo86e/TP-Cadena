#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Paz Exequiel 1k5 Leg 53382

/*1) Se tiene un vector de N elementos, en el que se almacenan, los nombres de artículos de 20 caracteres
como máximo de un negocio.

Se Pide: Un Menú Para
a. Realizar la carga de los artículos. Usar gets()

b. Buscar un NOMBRE determinado de artículo,
i. si se encuentra en el vector mostrar en pantalla El Mensaje “Articulo Encontrado”,
ii. en el caso de no encontrarse mostrar en pantalla el mensaje “Articulo NO encontrado”.
Usar strcmp() para buscar el artículo no olvide que para usar la anterior función necesitara la librería string.h
 
c. Mostrar en pantalla la lista de artículos. Usar puts().*/

typedef char cadena[21];

void cargarf(cadena items[21],int &n)
{
	printf("Ingrese la cantidad de articulos que quiere registrar: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nIngrese el articulo %d: ",i);
		_flushall();
		gets(items[i]);
	}
	system("cls");
}

void buscarf(cadena items[21],int n)
{
	cadena articulo;
	int comparar;
	
	printf("\nIngrese el articulo a buscar: ");
	_flushall();
	gets(articulo);
	for(int i=0;i<n;i++)
	{
		comparar=strcmp(articulo,items[i]);
		if(comparar==0)
		{
			printf("\n\"Articulo Encontrado\"\n");
		}
		
	}
	if(comparar!=0)
	{
		printf("\n\"Articulo NO encontrado\"\n");
	}
	
	system("pause");
	system("cls");	
}

void mostrarf(cadena items[21],int n)
{
	printf("\nEl listado de productos es: \n");
	for(int i=0;i<n;i++)
	{
		puts(items[i]);
	}
	system("pause");
	system("cls");
}

main()
{
	int n=0, opcion;
	cadena items[21];
	system("color 1A");
	do
	{
		printf("Menu\n");
		printf("1)Cargar Articulos.\n");
		printf("2)Buscar Articulo.\n");
		printf("3)Mostrar Articulos.\n");
		printf("0)Salir.\n");
		printf("\nOpcion: ");
		scanf("%d",&opcion);
		system("cls");
		switch(opcion)
		{
			case 1:
				{
					cargarf(items,n);
					break;
				}
			case 2:
				{
					if(n!=0)
					{
						buscarf(items,n);
					}
					else
					{
						printf("\nAun no se ingresaron datos, cargue primero los articulos\n");
					}
					
					break;
				}
			case 3:
				{
					if(n!=0)
					{
						mostrarf(items,n);
					}
					else
					{
						printf("\nAun no se ingresaron datos, cargue primero los articulos\n");
					}
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
