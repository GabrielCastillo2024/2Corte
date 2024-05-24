

#include <iostream>

using namespace std;

void ingresarNums();

string respuesta;
int numero;
int regnum;

void ingresarNums()
{
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        cout << "Le apetece continuar? Responder Si o No." << endl;
        cin >> respuesta;

        if (respuesta != "Si" && respuesta != "No")
        {
            respuesta = "a";
            cout << "Solo se puede ingresar un numero y responder Si o No";
        }
    }
    while (respuesta == "Si");
}

int main(int argc, char const *argv[])
{
    ingresarNums();
    return 0;
}
