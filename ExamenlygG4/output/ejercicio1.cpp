#include <iostream>
using namespace std;

void acumularValores() {
    int numerito;
    int total = 0;

    cout << "Ingrese los valores a acumular de manera insana como todo un dev pro (ingrese 9999 para que se acabe como mi relacion):\n";

    do {
        cout << "Ingrese un valor: ";
        cin >> numerito;

        if (numerito != 9999) {
            total += numerito;
        }

        if (total == 0) {
            cout << "El valor acumulado es igual a cero.\n";
        } else if (total > 0) {
            cout << "El valor acumulado es mayor a cero.\n";
        } else {
            cout << "El valor acumulado es menor a cero.\n";
        }
    } while (numerito != 9999);

    cout << "El valor acumulado es: " << total << endl;
}

int main() {
    acumularValores();
    return 0;
}
