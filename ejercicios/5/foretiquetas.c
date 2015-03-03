/* Recorrer una cadena de caracteres de nombre "cadena". Comprobar si la
* posicion i de la cadena es un igual a una letra 'a'. Si no es así continuamos
* buscando. Si es así, debemos comprobar si i+1 es una letra 's'. Si es una
* 's' iremos a una etiqueta de nombre "es_s" la cual imprimimos que tenemos
* una 'a' seguida de una 's' y devolvemos un 1. Si no es una letra 's'.
* Finalizamos la ejecución del for, imprimimos un mensaje del tipo no tenemos
* una 'a' seguida de una 's' y devolvemos 0. */

/* Bibliotecas a incluir */
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Declaración de variables */
        char * cadena = "Esta es la cadena a recorrer, hasta aqui termina el \
			recorrido";
	int pos = 0;

        /* Código usando condicional for */
        for (pos = 0; pos < strlen(cadena); pos++) {
                if (cadena[pos] == 'a' && cadena[pos+1] == 's')
                        goto es_s;
        }
        printf("No tenemos una a seguida de una s en la cadena\n");
        return 0;

	/* Declaracion de etiquetas */
        es_s:
                printf("Tenemos una a seguida de una s en la posisción %d de" \
		       " la cadena\n", pos);
                return 1;
}
