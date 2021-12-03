#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Paz Exequiel 1k5 Leg 53382

/*Ingresa una frase de 100 caracteres como máximo. Mostrar la cantidad de letras en mayúsculas que
tiene la cadena.*/

main()
{
	system("color 1A");
	char frase[101];
	int longMax=0,mayus=0;
	
	do
	{
		printf("Ingrese una frase como maximo 100 caracteres, al finalizar presione \"ENTER\".\n");
		_flushall();
		gets(frase);
		longMax=strlen(frase);
		if(longMax>100)
		{
			printf("\nError! ingreso %d caracteres\nLa cantidad maxima de caracteres que debe ingresar es 100.\n\n",longMax);
		}
		else
		{
			for(int i=0;i<longMax;i++)
			{
				if(isalpha(frase[i]) && isupper(frase[i]))
					{
						mayus++;
					}
			}
			printf("\nLa cantidad de mayusculas que tiene la frase es: %d",mayus);
		}		
	}
	while(longMax>100);
	printf("\n\n");
	system("pause");	
}
