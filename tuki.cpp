#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_CTYPE,"spanish");
	int c;
	printf ("\n MENU");
	printf ("\n A: Adicionar a la Lista");
	printf ("\n B: Borrar de la Lista");
	printf ("\n o: Ordenar la Lista");
	printf ("\n i: Imprimir la Lista");
	printf ("\n \n Ingrese la opcion elegida, luego <ENTER>:");
	if (( c= getchar()) != '\n')
	{
		if(c=='A')
		    printf ("\ Ud selecciono AGREGAR");
		else
		    if(c=='B')
		        printf ("\n Ud selecciono BORRAR");
		    else
		        if(c=='O')
		            printf ("\n Ud selecciono ORDENAR");
		        else
		            if(c=='I')
		                printf ("\ Ud selecciono IMPRIMIR");
		            else
		                printf ("\n \n \n Ud ingreso una opcion INCORRECTA");
	}
	else
	    printf ("\n ¡Ud no ha ingresado NADA!");
}