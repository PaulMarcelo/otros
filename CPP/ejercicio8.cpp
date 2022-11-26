
/*
Hacer un programa en C++ que calcule el factorial de un número usando el bucle (WHILE).

El factorial de un número entero positivo se define como el producto de todos los números naturales anteriores o iguales a él.
Se escribe n!, y se lee "n factorial". (Por definición el factorial de 0 es 1: 0!=1)
Por ejemplo, 5! = 5*4*3*2*1 = 120
*/
#include <iostream>
using namespace std;
int main()
{
    int numero, contador;
    long double factorial;

    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << endl;

    if (numero == 0)
    {
        factorial = 1;
    }
    else
    {
        contador = 1;
        factorial = 1;
        while (contador <= numero)
        {
            factorial = factorial * contador;
            contador++;
        }
    }
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}