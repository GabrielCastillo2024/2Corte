#include <iostream>
#include "ejercicio1.cpp"
#include "ejecicio2.cpp"
#include "problemaTres.cpp"
#include "Ejercicio4.cpp"
#include "ejercicio5.cpp"

using namespace std;

void menu()
{
    int menu;
    cout << "1. Acumular numeros y sumarlos" << endl;
    cout << "2. Numeros negativos/positivos" << endl;
    cout << "3. Ingresar numeros " << endl;
    cout << "4. Suma de numeros impares" << endl;
    cout << "5. Mostrar los multiplos de 3 y 5" << endl;
    cout << "6. salir";
    cout<<" elige una  option: ";
    cin >> menu;

switch (menu)
{
case 1:
    acumularValores();

    break;
case 2:
    negativoPositivo();
    break;

case 3:
    ingresarNums();
    break;
case 4:
    sumaImpares();
    break;
case 5:
    funcion5();
    break;
case 6:
    cout << "Gracias por usar el programa profesor duran";
    break;

default:
cout << "Opcion no valida\n" "Prueba de nuevo\n";
    break;
}
}

