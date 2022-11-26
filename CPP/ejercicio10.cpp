
/*
Realizar un programa que determine en un conjunto de n números naturales:
¿Cuántos son menores que 15?
¿Cuántos son mayores que 50?
¿Cuántos están en el rango entre 25 y 45?
Usar la estructura de control (DO WHILE).

ℕ = {0, 1, 2, 3, 4, …}.​
*/
#include <iostream>
using namespace std;
int main()
{
    int cantidad_numeros, numero;
    int contador;
    int contador_15, contador_50, contador_25_45;

    cout << "Cuantos numeroa va a ingresar: ";
    cin >> cantidad_numeros;
    cout << endl;

    contador = 1;
    contador_15=0;
    contador_50=0;
    contador_25_45=0;
    do
    {
        cout << "Ingrese el número (" << contador << ") : ";
        cin >> numero;

        if (numero < 15)
        {
            contador_15++;
        }
        if (numero > 50)
        {
            contador_50++;
        }
        if (numero >= 25 && numero <= 45)
        {
            contador_25_45++;
        }
        contador++;
    } while (contador <= cantidad_numeros);

    cout << endl;
    cout << "Numeros menores que 15: " << contador_15 <<endl;
    cout << "Numeros mayores que 50: " << contador_50 <<endl;
    cout << "Numeros en el rango entre 25 y 45: " << contador_25_45 <<endl;
    cout << endl;
    return 0;
}