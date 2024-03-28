#include <stdio.h>

int main()
{
    printf("\nHola mundo!");

    /*2.3e.- Declare un puntero en el procedimiento principal que apunte
    a una variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la
    función sizeof()*/

    int num = 23, *p_num = &num;

    printf("\nEl contenido del puntero: %d", *p_num);
    printf("\nLa direccion de memoria almacenada por el puntero: %p", p_num);
    printf("\nLa direccion de memoria de la variable: %p", &num);
    printf("\nLa direccion de memoria del puntero %p", &p_num);
    printf("\nEl tamanio de memoria utilizado por la variable: %zu", sizeof(num));

    return 0;
}