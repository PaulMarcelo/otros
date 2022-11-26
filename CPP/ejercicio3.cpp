/**
 * Construir un programa que calcule y presente por pantalla el signo del zodiaco a partir de la
 *  introducción por teclado del día y mes de nacimiento como números enteros.
*/
#include <iostream>
using namespace std;
int main()
{
    int mes, dia;
    /* cout << "SIGNO ZODIACAL" << endl;
    cout << "(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril" << endl;
    cout << "(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto" << endl;
    cout << "(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre" << endl
         << endl; 
    cout << "Ingrese la fecha de su cumpleaños (dia y mes)" << endl;
    cin >> dia >> mes;*/

    cout << "Ingrese el día: " ;
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Su signo es: " ;
    switch (mes)
    {
    /*enero*/ case 1:
        if (dia < 20)
            cout << "Capricornio" << endl;
        else
            cout << "Acuario" << endl;
        break;

    /*febrero*/ case 2:
        if (dia < 19)
            cout << "Acuario" << endl;
        else
            cout << "Piscis" << endl;
        break;

    /*marzo*/ case 3:
        if (dia < 20)
            cout << "Piscis" << endl;
        else
            cout << "Aries" << endl;
        break;

    /*abril*/ case 4:
        if (dia < 19)
            cout << "Aries" << endl;
        else
            cout << "Tauro" << endl;
        break;

    /*mayo*/ case 5:
        if (dia < 20)
            cout << "Tauro" << endl;
        else
            cout << "Geminis" << endl;
        break;

    /*junio*/ case 6:
        if (dia < 21)
            cout << "Geminis" << endl;
        else
            cout << "Cancer" << endl;
        break;

    /*julio*/ case 7:
        if (dia < 21)
            cout << "Cancer" << endl;
        else
            cout << "Leo" << endl;
        break;

    /*agosto*/ case 8:
        if (dia < 21)
            cout << "Leo" << endl;
        else
            cout << "Virgo" << endl;
        break;

    /*septiembre*/ case 9:
        if (dia < 22)
            cout << "Virgo" << endl;
        else
            cout << "Libra" << endl;
        break;

    /*octubre*/ case 10:
        if (dia < 22)
            cout << "Libra" << endl;
        else
            cout << "Escorpio" << endl;
        break;

    /*noviembre*/ case 11:
        if (dia < 21)
            cout << "Escorpio" << endl;
        else
            cout << "Sagitario" << endl;
        break;

    /*diciembre*/ case 12:
        if (dia < 21)
            cout << "Sagitario" << endl;
        else
            cout << "Capricornio" << endl;
        break;

    default:
        cout << "INGRESE UNA FECHA VALIDA" << endl;
    }
    //cin.ignore();
    return 0;
}