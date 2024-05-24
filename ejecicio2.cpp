#include <iostream>
using namespace std;

void negativoPositivo() {
    const int cantidad_numeros = 15;
    int numeros[cantidad_numeros];

    cout << "Ingrese 15 numeros negativos:" << endl;

    int i = 0;
    do {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
        
        
        if (numeros[i] >= 0) {
            cout << "Debe ingresar un numero negativo." << endl;
        }
        else {
            numeros[i] *= -1; 
            i++;
        }
    } while (i < cantidad_numeros);

    cout << "Los numeros positivos correspondientes son:" << endl;

   
    for (int j = 0; j < cantidad_numeros; ++j) {
        cout << numeros[j] << " ";
    }
    cout << endl;

    
}

int main() {
    negativoPositivo();
    return 0;
}
