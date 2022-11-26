

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
    int edad, dinero, total;

    cout << "Dinero Recibido: ";
    cout << endl;
    edad = 12;
    dinero = 10;
    total = 10;
    do
    {
       dinero=dinero*2;
       total+=dinero;
       edad++;
    } while (total<1000);

    cout << endl;
    cout << "Edad: " << edad <<endl;
    //cout << "Dinero recibido: " << dinero <<endl;
    cout << "Total recibido: " << total <<endl;
    cout << endl;
    return 0;
}