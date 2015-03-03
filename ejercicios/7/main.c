/* En el programa main, dado un numero 'n' con el valor que nosotros queramos
 * definir. Comprobar si ese numero es par usando la funcion definida en
 * utils.
 * Si ese numero es par, debemos multiplicarlo por otro numero secreto que
 * nosotros definimos. Para ello debemos realizar una función de tipo estática
 * llamada multiplicar_numero_secreto donde el argumento de entrada sea el
 * numero 'n'.
 *
 * Devolver la multiplicacion del numero 'n' con el numero secreto en caso de
 * que 'n' sea par. Si no devolver -1.
 */

/* Zona para incluir las bibliotecas o las cabeceras */
#include "utils.h"
#include <stdio.h>

/* Zona para declarar la funcion estática */
static int multiplicar_numero_secreto (int num);

/* Programa Principal */
void main (void)
{
        /* Declaracion de variables locales */
        int n = 6;

        /* Cuerpo de la funcion main */
        if (es_par(n))
                printf("El número %d es par, y multiplicado por el numero" \
			"secreto vale %d\n", n, multiplicar_numero_secreto(n));
	else
                printf("El número %d no es par\n", n);
}

static int multiplicar_numero_secreto (int num) {

        int num_secreto = 3;

        if (es_par(num))
                return num * num_secreto;
        else
                return -1;
}
