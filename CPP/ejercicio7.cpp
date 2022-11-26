/*
Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando,
el multiplicador y el producto. (FOR)


multiplicando * multiplicador = producto
*/
#include <iostream>
using namespace std;
int main()
{
    int multiplicando, multiplicador, producto;

    cout << "Ingrese un numero: ";
    cin >> multiplicando;
    cout << endl;
    cout << "TABLA DE MULTIPLICAR DEL " << multiplicando<<endl;

    for (int multiplicador = 1; multiplicador <= 12; multiplicador++)
    {
        producto = multiplicando * multiplicador;
        cout << multiplicando << " * " << multiplicador << " = " << producto << endl;
    }

    return 0;
}