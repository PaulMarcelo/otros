

/**
 * Hacer un programa en C++que solicite al usuario que ingrese una fecha y calcule el día
correspondiente del año. Ejemplo, si se ingresa la fecha 31/12/1998, el número que se visualizará
será 365.

*/
#include <iostream>
using namespace std;
int main()
{
    int mes, dia, anio;
    int arreglo_dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int indice, dias_x_mes, resto, cantidad_dias;

    cout << "Ingrese el día: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;

    if (anio < 0)
    {
        cout << "El año ingresado no es valido" << endl;
    }
    else if (mes <= 0 || mes >= 12)
    {
        cout << "El mes ingresado no es valido" << endl;
    }
    else if (dia <= 0 || dia > 31)
    {
        cout << "El dia ingresado no es valido" << endl;
    }
    else
    {
        if (mes == 2)
        {

            if (anio % 4 == 0)
            {
                if (dia > 29)
                {
                    dias_x_mes = 0;
                }
                else
                {
                    dias_x_mes = 29;
                }
            }
            else
            {
                if (dia > 28)
                {
                    dias_x_mes = 0;
                }
                else
                {
                    dias_x_mes = 28;
                }
            }
        }
        else
        {
            indice = mes - 1;
            dias_x_mes = arreglo_dias_por_mes[indice];
        }

        if (dias_x_mes == 0)
        {
            cout << "El dia ingresado no es valido" << endl;
        }
        else
        {
            resto = dias_x_mes - dia;
            cantidad_dias = 0;

            for (int i = 0; i < mes; i++)
            {
                cantidad_dias = cantidad_dias + arreglo_dias_por_mes[i];
            }
            cantidad_dias = cantidad_dias - resto;

            cout << "dia: " << cantidad_dias << endl;
        }
    }

    cout << endl;
    return 0;
}