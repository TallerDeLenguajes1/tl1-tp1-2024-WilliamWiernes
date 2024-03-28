/* 4. Genere en el repositorio un archivo que se llame tp1_2.cpp y resuelva las
siguientes tareas mediante el uso de funciones:
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
*/

#include <stdio.h>

// Funciones
int cuadradoNum(int num);
void cuadradoNumVoid(int num);
void direccionContenidoVar(int num);
void invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int num, a, b;

    // Llamada a funciones
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("\n*****Apartado a*****");
    printf("\nEl cuadrado del numero es: %d", cuadradoNum(num));

    printf("\n*****Apartado b*****");
    printf("\nCuadrado desde funcion void");
    cuadradoNumVoid(num);

    printf("\n*****Apartado c*****");
    direccionContenidoVar(num);

    printf("\nIngrese el valor de a: ");
    scanf("%d", &a);
    printf("\nIngrese el valor de b: ");
    scanf("%d", &b);

    printf("\n*****Apartado d*****");
    invertir(a, b);

    printf("\n*****Apartado e*****");
    orden(a, b);

    return 0;
}

int cuadradoNum(int num)
{
    return num * num;
}

void cuadradoNumVoid(int num)
{
    printf("\nEl cuadrado del numero es: %d", num * num);
}

void direccionContenidoVar(int num)
{
    printf("\nLa direccion de memoria de la variable es: %p", &num);
    printf("\nEl contenido de la variable es: %d", num);
}

void invertir(int a, int b)
{
    int aux;

    printf("\nValor variable a: %d", a);
    printf("\nValor variable b: %d", b);

    printf("\nInvirtiendo valores...");

    aux = a;
    a = b;
    b = aux;

    printf("\nValor variable a: %d", a);
    printf("\nValor variable b: %d", b);
}

void orden(int a, int b)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;

        printf("\nEl menor es: %d", a);
        printf("\nEl mayor es: %d", b);
    }
    else
    {
        printf("\nEl menor es: %d", a);
        printf("\nEl mayor es: %d", b);
    }
}