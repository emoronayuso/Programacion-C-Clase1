/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main(void)
{
	/* Declaración de variables */
        int len = 0;
        char * cadena = "Esto es una prueba de otra cadena";

	/* Código usando condicional while */
        for (len = 0; cadena[len] != '\0'; len++);
        printf("La cadena tiene %d caracteres\n", len);
}
