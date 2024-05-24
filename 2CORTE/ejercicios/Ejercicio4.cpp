    /*Escriba el programa que calcule la suma de los números impares
    mientras sean distintos de cero.*/
    #include <iostream>
    
void sumaImpares() {
    int numero;
    int suma = 0;

    do {
        printf("Introduce un número (0 para terminar): ");
        scanf("%d", &numero);

        if (numero % 2 != 0 && numero != 0) {
            suma += numero;
        }

    } while (numero != 0);

    printf("La suma de los números impares es: %d\n", suma);
}